#include<stdio.h>
#include<math.h>

int gender(int n, long long int k, int neg)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return (k-1+neg)%2;
    }

    else
    {
        if(n>53)
        {
            return gender(53,k,neg);
        }
        else if(k<=(long long int)pow(2,n-2))
            return gender(n-1,k,neg);
        else
        {
            return gender(n-1,k-pow(2,n-2),(neg+1)%2);
        }
    }
}

main()
{
    int t;
    int n;
    long long int k;
    scanf("%d", &t);
        while(t--)
          {
          scanf("%d%Ld", &n, &k);
          printf((gender(n, k, 0)==0)?"Male\n":"Female\n");
          }
     
    /* 
int i;
long long int j;
    for(i=1;i<=t;i++)
    {
        for(j=1;j<=pow(2,i-1);j++)
        {
            printf((gender(i, j, 0)==0)?"Male ":"Female ");
        }
        printf("\n");
    }
    */
    return 0;
}
