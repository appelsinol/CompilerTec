#include "tree.h"
#include "stdlib.h"


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


node_t * node_init ( node_t *nd, nodetype_t type, void *data, uint32_t n_children, ... ) {

    va_list args;
    //Assign values to nd
    nd -> type = type;
    nd -> data = data;
    nd -> n_children = n_children;
    //Where is our entry?

    //Allocate memory to the children
    nd -> children = (node_t **)malloc(sizeof(node_t*) * n_children);

    va_start(args,n_children);
    
    for (int i = 0; i < n_children; i++){
        nd -> children[i] = va_arg(args,node_t*);
    }
 
    va_end(args);
}


void node_finalize ( node_t *discard ) {
    if (discard != NULL)
    {
        //free(discard -> type);
        free(discard -> data);
        //free(discard -> entry);
        //free(discard -> n_children);
        free(discard -> children);
        free(discard);

    }
}


void destroy_subtree ( node_t *discard ){
    if (discard != NULL)
    {
        //free discard's subtree
        for (int i = 0 ; i < discard -> n_children; i ++){
            destroy_subtree(discard -> children[i]);
            node_finalize(discard -> children[i]);
        }
    }

    //free node discard
    node_finalize(discard);
}


