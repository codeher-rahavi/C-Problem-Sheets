#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,zero=0,non=0;
    scanf("%d",&num);
    int arr[num][num];
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(arr[i][j]==0)
            {
                zero++;
            }
            if(arr[i][j]>0)
            {
                non++;
            }
        }
    }

    if(zero>non)
    {
        printf("it is a sparse matrix");
    }
    return 0;
}
