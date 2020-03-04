%{ 
#include<stdio.h> 
#include<math.h>
%} 

%token NUMBER 

%left '+' '-'

%left '*' '/' '%' '^'

%left '(' ')'

%% 
ArithmeticExpression: E{ 

		printf("\n Result is = %d\n",$$);  
		}; 
E:E'+'E {$$=$1+$3;} 

|E'-'E {$$=$1-$3;} 

|E'*'E {$$=$1*$3;} 

|E'/'E {$$=$1/$3;} 

|E'%'E {$$=$1%$3;} 

|'('E')' {$$=$2;} 

|E'^'E {$$=pow($1,$3);}

| NUMBER {$$=$1;} 

; 

%% 
 void yyerror(char *s){}
void main() 
{
int i;
for(i=1;i<=10;i++){ 
yyparse(); 

}
 }
