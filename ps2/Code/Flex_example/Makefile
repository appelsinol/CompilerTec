scanner : lex.yy.c
	gcc -o lexer lex.yy.c
	
lex.yy.c : scanner.l
	flex scanner.l
	
clean :
	rm -f lex.yy.c lexer
