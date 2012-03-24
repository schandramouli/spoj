#include<stdio.h>
#include<string.h>
int rule(char c1,char c2, int ins)
{
if(c1=='(')c1='+';
if(c2==')')c2='+';
if(c1==')')c1='*';
if(c2=='(')c2='*';
switch(c1)
{
case '+': return ((c2=='+'||c2=='-')?1:((ins==1)?0:1));
	break;
case '-': return((ins==1)?0:1);
	break;
case '*': return((ins==1)?0:1);
	break;
case '/': return 0;
	break;
}
}

void rem(char str2[],int i,int j)
{
int l;
for(l=0;str2[l]!='\0';l++)
{
if(l==i||l==j)
{
str2[l]=' ';
}
}
}

main()
{
char str[500],str2[500],c1,c2;
int i,j,l,t,ins=0,r,len;

scanf("%d%*c",&t);
for(l=0;l<t;l++)
{
gets(str);
strcpy(str2,str);
len=strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==')')
{
ins =0;
c2=(i!=len-1)?str[i+1]:'+';
j=i;
while(str[i]!='(')
{
if(str[i]=='+'||str[i]=='-')
{
ins=1; str[i]='k'; 
}
i--;
}
str[i]='k';
c1=(i!=0)?str[i-1]:'+';

r=rule(c1,c2,ins);

if(r==1)
{
rem(str2,i,j);
}
i=j;
}
}

for(i=0;i<len;i++)
{
if(str2[i]!=' ')
printf("%c",str2[i]);
}

printf("\n");
}
return 0;
}

