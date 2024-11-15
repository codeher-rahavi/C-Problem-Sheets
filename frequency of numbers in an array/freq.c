#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,i,j,c=0;
    printf("enter the dimensions:");
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
            printf("%d ",&arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(arr[i][j]==arr[j][i])
            {
                c=1;
            }
        }
    }
    if(c=1)
    {
        printf("it is a symmetric matrix");
    }
}
