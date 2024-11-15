#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,c=1;
    printf("enter the matrix dimention:");
    scanf("%d",&num);
    int arr[num][num],arr1[num][num];
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n");
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            arr1[i][j]=arr[j][i];
        }
    }

    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(arr[i][j]!=arr1[i][j])
            {
                c=0;
                break;
            }
        }

    }
    if(c==1)
    {
        printf("it is a symmetric matrix");
    }
    else
    {
        printf("it is not a symmetric matrix");
    }

    return 0;
}
