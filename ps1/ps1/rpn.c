#include <stdlib.h>
#include "rpn.h"


RpnCalc newRpnCalc(){
    // TODO initialize new RpnCalc
    RpnCalc rpnCalc;
    rpnCalc.size = 1000;
    rpnCalc.top = -1;
    rpnCalc.stack = (double*)malloc(sizeof(double)*1);

    return rpnCalc;
}

void push(RpnCalc* rpnCalc, double n){
    // TODO push n on stack, expand stack if neccesary
    if(rpnCalc -> top + 1 == rpnCalc -> size){
    	rpnCalc -> size = rpnCalc -> size * 2;
    	rpnCalc -> stack = realloc(rpnCalc -> stack, sizeof(int) * rpnCalc-> size);
    }

    rpnCalc -> top++;
    rpnCalc -> stack[rpnCalc -> top] = n;
   
   
}

void performOp(RpnCalc* rpnCalc, char op){
    // TODO perform operation
    double s ,t ;
    s = peek(rpnCalc);
   // printf("%f\n", s);
    t = peek(rpnCalc);
    //printf("%f\n", t);
    //if(op == '+'){ push(rpnCalc, s + t);printf(" + operation is done\n");}
	//if(op == '-'){ push(rpnCalc, s - t);}
    //if(op == '*'){ push(rpnCalc, s * t);}
    //if(op == '/'){ push(rpnCalc, s / t);}
    switch(op){
    	case '+' :
    		push(rpnCalc,t + s);
    		break;
    	case '-' :
    		push(rpnCalc,t - s);
    		break;
    	case '*' :
    		push(rpnCalc,t * s);
    		break;
    	case '/' :
    		push(rpnCalc,t / s);
    		break;
    	default:
    	break;

    }

}

double peek(RpnCalc* rpnCalc){
    // TODO return top element of stack
    double m;
     if(rpnCalc -> top >= 0){
    	m = rpnCalc -> stack[rpnCalc -> top];
    	rpnCalc -> top--;
    	return m;
    }else{
    	return 0;
    }
}
