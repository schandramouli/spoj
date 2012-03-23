#include<stdio.h>
#include<math.h>
int det(int a[10000][10000],int n);
main()
{
    int a[10000][10000];
    int m,n;
    int i,j;
    int u,v;
    scanf("%d%d",&m,&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            a[i][j]=0;
    }
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&u,&v);
        a[u][v]=1;
    }

    if(m!=n-1)
    {
        printf("NO");
    }

    else
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                if(j!=i)
                {
                    a[i][i]+=a[i][j];
                    a[i][j]*=-1;
                }
            }

        for(i=1;i<n;i++)
            for(j=1;j<n;j++)
                a[i-1][j-1]=a[i][j];

        printf(((det(a,n-1)==1)?"YES":"NO"));
    }

    return 0;
}


int det(int a[10000][10000],int n)
{
    int dete=0;
    if(n==1)
    {
        dete=a[0][0];
    }
    else
    {

        int i,j,k=0,l=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                int b[10000][10000];
                if(i!=k&&j!=l)
                {
                    b[k][l]=a[i][j];
                }
                dete+=pow(-1,i+j)*a[i][j]*det(b,n-1);
            }
        }
    }
    return dete;
}



