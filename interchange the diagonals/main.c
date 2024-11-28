#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3],i,j,temp1=0,temp2=0;
    printf("enter the elements of the matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    temp1=arr[0][0];
    arr[0][0]=arr[0][2];
    arr[0][2]=temp1;
    temp2=arr[2][0];
    arr[2][0]=arr[2][2];
    arr[2][2]=temp2;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
