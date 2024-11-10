#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,sum=0;
    scanf("%d",&num);
    int arr1[num][num],arr2[num][num];
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
           scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
           scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            sum=arr1[i][j]+arr2[i][j];
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}
