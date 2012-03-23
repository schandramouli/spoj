#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int f,a,b;
        int e;
        long long int x,y;
        scanf("%lld%d%lld%lld",&f,&e,&a,&b);
        long long int arr[e][f],ex[e];
        int i, j;
        for(i=0;i<e;i++)
        {  
            for(j=0;j<f;j++)
            {
                arr[i][j]=0;
            }
            scanf("%lld%lld",&x,&y);

            ex[e]=x;
            while(y<f)
            {
                arr[e][y]=1;
                y+=x;
            }
        }

//        int res = func(arr,ex,f,e,a,b);
 //       printf("%d",res);


    }


    return 0;
}

int func(int arr[][50000000],int ex[],long long int f, int e,long long int a,long long int b)
{
    if(a>=f)
    {
        return 0;
    }
    if(a==b)
    {
        return 1;
    }

    else
    {
        int i,j;
        for(i=0;i<e;i++)
        {
            if(arr[e][a]==1)
            {
                if(func(arr,ex,f,e,a+ex[e],b)==1)
                    return 1;
            }
        }
    }
    return 0;

}


