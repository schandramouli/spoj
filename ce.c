#include<stdio.h>
#include<ctype.h>
main()
{
    int t=99;
    while(t--)
    {
        char str[10];
        gets(str);
        int a,i=0;
        while(isalnum(str[i]))
        {
            a+=str[i]-'0';
            a*=pow(10,i);
        }
        


    }
    return 0;

}
