#include<stdio.h>
main()
{
    int t,i,n;
    scanf("%d", &t);
    while(t--)
    {
    double xi=0,xi1=0,yi=0,yi1=0,A=0,cx=0,cy=0,term,x,y;

        scanf("%d", &n);
        scanf("%lf%lf",&x,&y);
       xi=x;
       yi=y;
       for(i=1;i<n;i++)
        {
            scanf("%lf%lf",&xi1,&yi1);
            term=xi*yi1-xi1*yi;
            A+=term;
            cx+=(xi+xi1)*term;
            cy+=(yi+yi1)*term;
            xi=xi1;
            yi=yi1;

        }
        term=xi*y-x*yi;
        A+=term;
        cx+=(xi+x)*term;
        cy+=(yi+y)*term;
    

        A/=2;
        term = 6*A;
        cx/=term;
        cy/=term;

        printf("\n%.2lf %.2lf",cx,cy);
    }
    return 0;
}

