#include<stdio.h>

int f(int n)
{
    int i;
    int sum=1;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
        {
            if(i*i==n)
                sum+=i;
            else
                sum+=i+n/i;
        }
    return sum;
}
main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d", &n);
        printf("%d\n", (n==0||n==1)?0:f(n));   
    }
    return 0;

}
