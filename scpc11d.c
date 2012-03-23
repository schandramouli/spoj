#include<stdio.h>
#define max(a,b) (a>b)?a:b
main()
{
    int a,b,c;
    int m;
    scanf("%d%d%d",&a,&b,&c);
    while(a!=0||b!=0||c!=0)
    {
        m=max(max(a,b),c);
        if(a==m&&a*a==b*b+c*c)
            printf("right\n");

        else if(b==m&&b*b==a*a+c*c)
            printf("right\n");


        else if(c==m && a*a+b*b==c*c) printf("right\n");
        else printf("wrong\n");
        scanf("%d%d%d",&a,&b,&c);

    }
    return 0;
}
