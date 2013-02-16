%{
#include "parser.h"
#ifdef DUMP_TOKENS
    #define RETURN(t) do {                                      \
        fprintf ( stderr, "TOKEN ( %d,\t'%s' )\n", t, yytext );    \
        return t;                                               \
    } while ( 0 )
#else
    #define RETURN(t) return t
#endif
%}

%option array
%option noyywrap
%option yylineno

DIGIT [0-9]
LETTER [a-zA-Z_]
WHITESPACE [\ \t\n]
COMMENTS \/\/.*$
KEYWORDS FUNC|PRINT|RETURN|CONTINUE|IF|THEN|ELSE|FI|WHILE|DO|DONE|FOR|TO|VAR
OPERATORS :=|+|-|*|/|>|<|<=|>=|==|!= 
NUMBERS {DIGIT}+
STRING \"[^\n]*\"
ID {LETTER}({LETTER}|{DIGIT})*

%%
{COMMENTS} 		{ }
{WHITESPACE} 	{ }
FUNC 			{ RETURN( FUNC ); }
PRINT 			{ RETURN( PRINT ); }
RETURN 			{ RETURN( RETURN ); }
CONTINUE 		{ RETURN( CONTINUE ); }
IF 				{ RETURN( IF ); }
THEN 			{ RETURN( THEN ); }
ELSE 			{ RETURN( ELSE ); }
FI 				{ RETURN( FI ); }
WHILE 			{ RETURN( WHILE ); }
DO 				{ RETURN( DO ); }
DONE 			{ RETURN( DONE ); }
VAR 			{ RETURN( VAR ); }
":=" 			{ RETURN( ASSIGN ); }
"+" 			{ RETURN( '+' ); }
"-" 			{ RETURN( '-' ); }
"*" 			{ RETURN( '*' ); }
"/" 			{ RETURN( '/' ); }
">" 			{ RETURN( '>' ); }
"<" 			{ RETURN( '<' ); }
"<=" 			{ RETURN( LEQUAL ); }
">=" 			{ RETURN( GEQUAL ); }
"==" 			{ RETURN( EQUAL ); }
"!=" 			{ RETURN( NEQUAL ); }
{NUMBERS} 		{ RETURN( NUMBER ); }
{STRING} 		{ RETURN( STRING ); }
{ID} 			{ RETURN( IDENTIFIER ); }
.           	{ RETURN( yytext[0] ); }
%%
