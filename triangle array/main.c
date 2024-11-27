#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d",&num);
    int arr[num][num];
    int i,j;
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int dp[num][num];
    for(j=0;j<num;j++)
    {
        dp[num-1][j]=arr[num-1][j];
    }
    for(i=num-2;i>=0;i--)
    {
        for(j=0;j<=1;j++)
        {
            dp[i][j]=arr[i][j]+(dp[i+1][j]<dp[i+1][j+1]?dp[i+1][j]:dp[i+1][j+1]);
        }
    }
    printf("the minimum path sum is:%d\n",dp[0][0]);

    return 0;
}
