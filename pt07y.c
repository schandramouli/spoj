#include<stdio.h>
main()
{
    int t;
    int m,n;
    int i, u,v;
        scanf("%d%d",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&u,&v);
        }
        
        if(m!=n-1)
        {
            printf("NO");
        }
        
        else
        {   
            printf("YES");
        }

    
    return 0;
}
