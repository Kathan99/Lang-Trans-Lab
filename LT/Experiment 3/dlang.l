%{
%}

DIGIT [0-9]
ID [a-zA-Z][a-zA-z0-9]*
STR [a-zA-Z0-9]+

%%
{DIGIT}+	{printf("An integer %s\n",yytext);}
{DIGIT}*"."{DIGIT}+ 	{printf("A float %s\n",yytext);}
if|for|while|do|exit|else|case|case|switch|until {printf("Keyword %s\n",yytext);}
{ID} {printf("Identifier %s\n",yytext);}
"/*"([^*]|\*+[^*/])*\*+"/"  {printf("MultiLine Comment%s\n",yytext);}
"+"|"-"|"*"|"/"|"="|"<"|">"|"=="|"!="|"<=" {printf("A Operator %s\n",yytext);}
"***"{STR} {printf("Single Line Comment\n");}

"("|")"|"{"|"}"|";" {printf("A punctuation %s\n",yytext);}
"'"{STR}"'" {printf("String Constant %s\n",yytext);}
%%

int yywrap(){}

int main(){
yylex();
}