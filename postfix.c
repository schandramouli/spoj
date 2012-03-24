#include<stdio.h>
#include<string.h>
int prec(char a)
{
switch(a)
{
case '+': return 1;
case '-': return 2;
case '*': return 3;
case '/': return 4;
case '^': return 5;
default : return 0; 
}
}
main()
{
char infix[500],postfix[500],stack[500];
int i,j,k,n;
int t;
scanf("%d%*c",&t);
for(n=0;n<t;n++)
{
gets(infix);
i=0,j=0,k=0;
i=strlen(infix);
infix[i]=')';
infix[i+1]='\0';
stack[k++]='(';
for(i=0;infix[i]!='\0';i++)
{
if(isalpha(infix[i])!=0)
{
postfix[j++]=infix[i];
}
else if(infix[i]=='(')
{
stack[k++]='(';
}
else if(infix[i]==')')
{
while(stack[k-1]!='(')
{
postfix[j++]=stack[k-1];
k--;
}
k--;
}

else
{
if(prec(infix[i])>prec(stack[k-1]))
{
stack[k++]=infix[i];
}
else
{
while(prec(infix[i])<=prec(stack[k-1]))
{
postfix[j++]=stack[k-1];
k--;
}
stack[k++]=infix[i];
}
}
}

postfix[j]='\0';
printf("%s\n",postfix);
}
return 0;

}
