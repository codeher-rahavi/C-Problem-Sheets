#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,determinant =0;
    int arr[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    determinant=arr[0][0]*((arr[1][1]*arr[2][2])-(arr[2][1]*arr[1][2]))-
                arr[0][1]*((arr[1][0]*arr[2][2])-(arr[2][0]*arr[1][2]))+
                arr[0][2]*((arr[1][0]*arr[2][1])-(arr[2][0]*arr[1][1]));
    printf("the determinant of the array is %d ",determinant);
    return 0;
}
