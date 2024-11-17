#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0,i,j,namecount;
    int printed[100];
    char names[100][20];
    for(i=0;i<100;i++)
    {
        printed[i]=-1;
    }
    for(i=0;i<100;i++)
    {
        scanf(" %[^\n]",names[i]);
        if(strcmp(names[i],"end")==0)
        {
            break;
        }
        count++;
    }

    printf("repeated names\n");
    for(i=0;i<count;i++)
    {
        if(printed[i]==-1)
        {
            namecount=1;
            for(j=i+1;j<count;j++)
            {
                if(strcmp(names[i],names[j])==0)
                {
                    namecount++;
                    printed[j]=0;
                }
            }
            if(namecount>1)
            {
                printf("%s\n",names[i]);
            }
        }

    }


    return 0;
}
