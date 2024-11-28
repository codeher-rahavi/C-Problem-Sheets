#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,row_sum=0,col_sum=0;
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
        row_sum=0;
        for(j=0;j<num;j++)
        {
            row_sum+=arr[i][j];
        }
        printf("row:%d=%d\n",i+1,row_sum);
    }
    for(i=0;i<num;i++)
    {
        col_sum=0;
        for(j=0;j<num;j++)
        {
            col_sum+=arr[j][i];
        }
        printf("col:%d=%d\n",i+1,col_sum);
    }

    return 0;
}
