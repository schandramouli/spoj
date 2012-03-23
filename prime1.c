#include<stdio.h>

void f(long long int m, long long int n)
{
    int arr[100005]; long long int i, j,k;
    for(i=0;i<=n-m;i++)
    {
        arr[i]=1;
    }
    for(i=2;i*i<=n;i++)
    {
        if(2*i>=m)
        {
            j=2*i-m;
        }
        else
        {
            if(m%i==0&&m!=i)
                j=0;
            else
                j=i-m%i;
        }

            for(;j<=n-m;j+=i)
            {
                arr[j]=0;
            }
        }
    for(i=0;i<=n-m;i++)
        if(arr[i]==1)
            printf("%Ld\n",i+m);
}
main()
{
    long long int n, m;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%Ld",&m);
        scanf("%Ld",&n);
        if(m==1)
            m++;
/*        while(m<3&&m<=n)
        {
            printf("%Ld\n",m++);
        }*/
        if(m<=n)
        {
            f(m,n);
        }
            printf("\n");
    }
    return 0;

}
