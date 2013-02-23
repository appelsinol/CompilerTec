#include "tree.h"


#ifdef DUMP_TREES
void
node_print ( FILE *output, node_t *root, uint32_t nesting )
{
    if ( root != NULL )
    {
        fprintf ( output, "%*c%s", nesting, ' ', root->type.text );
        if ( root->type.index == INTEGER )
            fprintf ( output, "(%d)", *((int32_t *)root->data) );
        if ( root->type.index == VARIABLE || root->type.index == EXPRESSION )
        {
            if ( root->data != NULL )
                fprintf ( output, "(\"%s\")", (char *)root->data );
            else
                fprintf ( output, "%p", root->data );
        }
        fputc ( '\n', output );
        for ( int32_t i=0; i<root->n_children; i++ )
            node_print ( output, root->children[i], nesting+1 );
    }
    else
        fprintf ( output, "%*c%p\n", nesting, ' ', root );
}
#endif


node_t* simplify_tree ( node_t* node ){

    node_t * temp = NULL;


    if ( node != NULL ){

        // Recursively simplify the children of the current node
        for ( uint32_t i=0; i<node->n_children; i++ ){
            node->children[i] = simplify_tree ( node->children[i] );
        }

        // After the children have been simplified, we look at the current node
        // What we do depend upon the type of node
        switch ( node->type.index )
        {
            // These are lists which needs to be flattened. Their structure
            // is the same, so they can be treated the same way.
            case FUNCTION_LIST: case STATEMENT_LIST: case PRINT_LIST:
            case EXPRESSION_LIST: case VARIABLE_LIST:
               if (node -> n_children > 1){
                    //First allocate the first child to the temp node
                    temp = node -> children[0];
                    //assign another node child to the temp
                    uint32_t i = temp -> n_children += 1 ;
                    temp -> children[i - 1] = node -> children[1];
                    node_finalize(node);
                }
                break;


            // Declaration lists should also be flattened, but their stucture is sligthly
            // different, so they need their own case
            case DECLARATION_LIST:
            if (node -> children[1] == NULL)
            {
                temp = node -> children[0];
                node_finalize(node -> children[1]);
                node_finalize(node);
            }
            break;
                

            
            // These have only one child, so they are not needed
            case STATEMENT: case PARAMETER_LIST: case ARGUMENT_LIST:
                temp = node -> children[0];
                node_finalize(node);
                break;


            // Expressions where both children are integers can be evaluated (and replaced with
            // integer nodes). Expressions whith just one child can be removed (like statements etc above)
            case EXPRESSION:
            if (node -> n_children == 1)
            {
                if (node -> children[0] -> type.index == INTEGER){
                temp = node -> children[0];
                node_finalize(node);
                }
            }else if (node -> n_children == 2)
            {
                if (node -> children[0] -> type.index == INTEGER && 
                    node -> children[1] -> type.index == INTEGER &&
                    node -> data != NULL)
                  {
                        temp = node -> children[0];
                        //based on data type, assign the value after each opeartion to the temp node.
                        switch (*((char *)node -> data)){
                            case '+' : *((int *)temp -> data) = *((int *)(node -> children[0] -> data)) + *((int *)(node -> children[1] -> data)); break;
                            case '-' : *((int *)temp -> data) = *((int *)(node -> children[0] -> data)) - *((int *)(node -> children[1] -> data)); break;
                            case '*' : *((int *)temp -> data) = *((int *)(node -> children[0] -> data)) * *((int *)(node -> children[1] -> data)); break;
                            case '/' : *((int *)temp -> data) = *((int *)(node -> children[0] -> data)) / *((int *)(node -> children[1] -> data)); break;

                        }
                        
                  }  
                  node_finalize(node -> children[0]);
                  node_finalize(node);
            }

    }
    return temp;
}
}


