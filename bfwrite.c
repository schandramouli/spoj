#include<stdio.h>
#define N 32768

char data[N];
char * ptr = data;
void compile(char str[1000][1000],int insno,int start)
{
    int ins = insno;
    int i;
    for(i=start;;i++)
    {
        if(str[ins][i]=='+')
            (*ptr)++;
        else if(str[ins][i]=='-')
            (*ptr)--;
        else if(str[ins][i]=='>')
            ptr++;
        else if(str[ins][i]=='<')
            ptr--;
        else if(str[ins][i]=='.')
            printf("%c",*ptr);
        else if(str[ins][i]==',')
            scanf("%c", ptr);

        else if(str[ins][i]=='[')
        {
            while((*ptr)!=0)
            {   
            //    printf("entered ");
                compile(str,ins,i+1); 
            }

            int count=1;
            while(count!=0)
            {
                i++;
                if(str[ins][i]=='[')
                    count++;
                else if(str[ins][i]==']')
                    count--;
                else if(str[ins][i]=='\0')
                {
                    ins++;
                    i=-1;
                }

            }
        }

        else if(str[ins][i]==']')
        {
           // printf("return ");
            return;
        }
        else if(str[ins][i]=='\0')
        {
            ins++;
            i=-1;
            if(str[ins][0]=='\0') break;
        }
    }
     
}


main()
{
    int i=0;
    char str[1000][1000];
    gets(str[i]);
    while(str[i][0]!='\0')
    {
        i++;
        gets(str[i]);
    }
    for(i=0;i<N;i++)
        data[i]=0;

    compile(str, 0, 0);
    return 0;
}
