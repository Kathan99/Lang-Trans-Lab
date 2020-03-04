#include<stdio.h>
#include<string.h>
void identify(char s[],int len){
    int flag=0;
    int i=0;
    while(i<len){
        flag=0;
        if((int)s[i]>=48 && (int)s[i]<=57){
            while ((int)s[i]>=48 && (int)s[i]<=57)
            {
                i++;
            }
            if(s[i]=='.'){
                i++;
             while ((int)s[i]>=48 && (int)s[i]<=57)
            {
                i++;
            }
            printf("A float number\n");   
            }
            else{
                printf("An Integer number\n");
            }
        }
        else if(s[i]=='i'){
            i++;
            if(s[i]=='f'){
                printf("Keyword: If\n");
                i++;
            }
            else{
                i--;
            }
        }
        else if(s[i]=='f'){
            i++;
            if(s[i]=='o' && s[i+1]=='r'){
                printf("Keyword: For\n");
                i+=2;
            }
            else{
                i--;
            }
        }
        else if(s[i]=='w'){
            i++;
            if(s[i]=='h' && s[i+1]=='i'&& s[i+2]=='l'&& s[i+3]=='e' ){
                printf("Keyword: While\n");
                i+=4;
            }
            else{
                i--;
            }
        }
        else if(s[i]=='d'){
            i++;
            if(s[i]=='o'){
                printf("Keyword: Do\n");
                i++;
            }
            else{
                i--;
            }
        }
        else if(s[i]=='c'){
            i++;
            if(s[i]=='a' && s[i+1]=='s'&& s[i+2]=='e'){
                printf("Keyword: Case\n");
                i+=3;
            }
            else{
                i--;
            }
        }
        else if(s[i]=='e'){
            i++;
            if(s[i]=='l' && s[i+1]=='s'&& s[i+2]=='e'){
                printf("Keyword: Else\n");
                i+=3;
            }
            else if(s[i]=='x' && s[i+1]=='i'&& s[i=2]=='t'){
                printf("Keyword : Exit\n");
                i+=3;
            }
            else{
                i--;
            }
        }
        else if(s[i]=='s'){
            i++;
            if(s[i]=='w' && s[i+1]=='i'&& s[i+2]=='t'&& s[i+3]=='c' && s[i+4]=='h' ){
                printf("Keyword: Switch\n");
                i+=5;
            }
            else{
                i--;
            }
        }    
        else if(s[i]=='u'){
            i++;
            if(s[i]=='n' && s[i+1]=='t'&& s[i+2]=='i'&& s[i+3]=='l' ){
                printf("Keyword: Until\n");
                i+=4;
            }
            else{
                i--;
            }
        }
         else if(s[i]=='['){
             printf("Punctuation: [ \n");
             i++;
         }
         else if(s[i]==']'){
             printf("Punctuation: ] \n");
             i++;
         }
         else if(s[i]=='{'){
             printf("Punctuation: { \n");
             i++;
         }
         else if(s[i]=='}'){
             printf("Punctuation: } \n");
             i++;
         }
         else if(s[i]=='('){
             printf("Punctuation: ( \n");
             i++;
         }
         else if(s[i]==')'){
             printf("Punctuation: ) \n");
             i++;
         }
         else if(s[i]==','){
             printf("Punctuation: , \n");
             i++;
         }
         else if(s[i]=='+'){
             printf("Operator: + \n");
             i++;
         }
         else if(s[i]=='-'){
             printf("Operator: - \n");
             i++;
         }
         else if(s[i]=='*'){
             i++;
             if(s[i]!='*'){
                 printf("Operator *\n");
             }
             else if(s[i]=='*'){
                 i++;
                 if(s[i]=='*'){
                     while(i<len){
                         i++;
                     }
                     printf("Comment\n");
                 }
             }
         }
         else if(s[i]=='/'){
             printf("Operator: / \n");
             i++;
         }    
         else if(s[i]=='='){
             i++;
             if(s[i]=='='){
                 printf("Operator ==\n");
                 i++;
             }
             else{
                 printf("Operator =\n");
             }
         }
         else if(s[i]=='>'){
             i++;
             if(s[i]=='='){
                 printf("Operator >=\n");
                 i++;
             }
             else{
                    i--;
             }
         }
          else if(s[i]=='<'){
             i++;
             if(s[i]=='='){
                 printf("Operator <=\n");
                 i++;
             }
             else{
                    i--;
             }
         }
         else if(s[i]=='!'){
             i++;
             if(s[i]=='='){
                 printf("Operator !=\n");
                 i++;
             }
             else{
                    i--;
             }
         }
         else if(s[i]=='\''){
             i++;
             if(s[i]=='\''){
             if(i<len){
                 flag=1;
                 break;
             }
            }
            if(flag==0){
                printf("String\n");
            }
         }
         else if((int)s[i]==32){i++;}
         else if(s[i]=='\t'){i+=4;}
         else{
             printf("Unrecognized %s\n",s[i]);
             i++;
         }
         
    }
}

int main(){
    char name[]="";
    gets(name);
    identify(name,strlen(name));
    return 0;
}