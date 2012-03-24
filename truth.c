#include<stdio.h>
main()
{
int a,b,c,d,e;
int f,g,h,i;
for(a=0;a<=1;a++)
for(b=0;b<=1;b++)
for(c=0;c<=1;c++)
{
f=b&&c;
g=a&&!c;


if(f||g)
printf("%d %d  1\n",f,g);
else
printf("%d %d  0\n",f,g);

}
return 0;
}

