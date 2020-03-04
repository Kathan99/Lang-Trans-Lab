/*E->E+T|E-T|T
  T->T*F\T/F\F
  F->(E)|id
 */ 
 /* E->TA
    A->+TA|-TA|^
    T->FB
    B->*FB|/FB|^
    F->(E)|NUM
 */   
#include<stdio.h>
#include<stdlib.h>
char lookhead1='T',lookhead;
void E();
void T();
void B();
void A();
void F();
int i=0;
//char s[]={'2','+','2'};
//char getchar1()
char s[1001];
//{
//	return s[i++];
//}

void A()
{
	if(s[i]=='+')
	{
		i++;
		T();
		A();
	}
	else if(s[i]=='-')
	{
		i++;
		T();
		A();
	}
	else
	return;
}
void T()
{
	//if(lookhead=='F')
	//{
		F();
		B();
	//}
}
void B()
{
	if(s[i]=='*')
	{
	 	i++;
		F();
		B();
	}
	else if(s[i]=='/')
	{
		i++;
		F();
		B();
	}
	else
	return;
}
void F()
{	
	if(s[i]=='(')
	{
		i++;
		E();
		if(s[i]==')')
		i++;
	}
	else if(s[i]>='0' && s[i]<='9')
	{
		i++;
		return;
	}
}		
void E()
{
		T();
		A();
}	
int main(void)
{
	scanf("%s",s);
	E();
	if(s[i]=='$')
	printf("Successfully Parsed");
	else
	printf("Error");
	return 0;
}
