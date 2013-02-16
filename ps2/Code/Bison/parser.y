%{
#include <math.h>
#include <stdio.h>
int yyerror(char*);
%}

%token INT FLOAT PLUS MINUS MULT DIV SQRT

%left PLUS MINUS
%left MULT DIV
%nonassoc SQRT

%%

program : expression { printf("Anser is: %d\n", $1); }
        ;
expression : expression PLUS expression  { $$ = $1 + $3; }
		   | expression MINUS expression { $$ = $1 - $3; }
		   | expression DIV expression   { $$ = $1 / $3; }
		   | expression MULT expression  { $$ = $1 * $3; }
		   | SQRT expression { $$ = sqrt($2); }
           | INT             { $$ = $1; }
           | FLOAT           { $$ = $1; }
           ;
%%

int main(){
    
    int a = yyparse();
    printf("%d\n", a);
}

int yyerror(char* s){
    printf("Error");
}
