#include<stdio.h>
#include<string.h>

int hash(char str[20])
{
    int i;
    int h=0;
    for(i=0;str[i]!='\0';i++)
    {
        h+=(i+1)*(int)str[i];
    }
    h*=19;
    h%=101;
    return h;
}
void insert(char table[101][20], char str[20])
{
    int h = hash(str);
    int h2, j;
    for(j=0;j<20;j++)
    {
        h2=h+j*j+23*j;
        h2%=101;
        if(strcmp(table[h2],str)==0)
        {
            return;
        }
    }

    for(j=0;j<20;j++)
    {
        h2=h+j*j+23*j;
        h2%=101;
        if (table[h2][0]=='\0')
        {
            strcpy(table[h2], str);
            return;
        }

    }
}

void delete(char table[101][20], char str[20])
{
    int h = hash(str);
    int h2,j;
    for(j=0;j<20;j++)
    {
        h2=h+j*j+23*j;
        h2%=101;

        if (strcmp(table[h2], str)==0)
        {
            table[h2][0]='\0';
            return;
        }

    }
}

void print(char table[101][20])
{
    int count=0;
    int i;
    for(i=0;i<101;i++)
    {
        if(table[i][0]!='\0')
            count++;
    }
    printf("\n%d", count);
    for(i=0;i<101;i++)
    {
        if(table[i][0]!='\0')
            printf("\n%d:%s", i,table[i]);
    }

}


void clear(char table[101][20])
{
    int i;
    for(i=0;i<101;i++)
    {
        table[i][0]='\0';
    }
}

main()
{
    int t;
    int n;
    char str[20], ele[20];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        char table[101][20];
        clear(table);
        while(n--)
        {
            scanf("%s", str);
            int i;
            for(i=4;str[i-1]!='\0';i++)
            {
                ele[i-4]=str[i];
            }
/*            if(strcmp(ele,"")==0)
            {
                int r=0;
                printf("%d",1/r);
            }*/
            if(str[0]=='A')
                insert(table, ele);
            else
                delete(table, ele);
        }
        print(table);
    }
    return 0;
}
