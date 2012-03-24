#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
int i,u,e,c;
char str[1000];
while(!EOF)
{
scanf("%s",str);

u=0;c=0;e=0;

for(i=0;str[i]!='\0';i++)
{
if(str[i]=='_')
{u=1;
if(str[i+1]=='_')e=1;
}
else if(isupper(str[i]))c=1;

else if(islower(str[i])){}
else
e=1;

}
if(isupper(str[0]))e=1;

if(str[0]=='_'||str[strlen(str)-1]=='_')e=1;
if(c==1&&u==1)e=1;

if(e==1)printf("Error!");
else
{
if(c==1)
{
for(i=0;str[i]!='\0';i++)
{
if(isupper(str[i]))
{
str[i]+=32;
printf("_");
}
printf("%c",str[i]);
}
}
else if(u==1)
{
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='_')
{
i++;
str[i]-=32;
}
printf("%c",str[i]);
}
}

else
printf("%s",str);
}
printf("\n");

}

return 0;

}
