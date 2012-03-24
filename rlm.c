#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * itoame(int val)
{
char s[102]={0};
int i=100;
for(;val&&i;--i,val/=10)
s[i]=val%10;
return &s[i+1];
}

int convert(char s[])
{
int i,t;
int k=0;char str[100];
for(i=0;s[i]!='\0';i+=2)
{
t=s[i];
while(t--)
{
str[k++]=s[i+1];
}
}
return atoi(str);
}

main()
{
int t,res,a,b;
char s1[100],s2[100],s3[100],s4[100],c;
scanf("%d",&t);
while(t--)
{
scanf("%s%*c",s1);
scanf("%c",&c);
scanf("%s",s2);
a=convert(s1);
printf("%d",a);
b=convert(s2);
switch(c)
{
case '+': res=a+b;
break;
case '-': res =a-b;
break;
case '*': res=a*b;
break;
case '/': res= a/b;
break;
}


strcpy(s3,itoame(res));
printf("%s\n",s3);
int k=0,i,count;char ch;
for(i=0;s3[i]!='\0';)
{
ch=s3[i];count=0;
while(ch==s3[i])
{
count++;
i++;
}
s4[k++]=count;s4[k++]=ch;

}
s4[k++]='\0';

printf("%s %c %s = %s",s1,c,s2,s4);
}
return 0;
}
