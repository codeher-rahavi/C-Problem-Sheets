#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num],i,j,sum=0;
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=__INT_MAX__;
    int index1=0;
    int index2=0;
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            sum=arr[i]+arr[j];
            if(abs(sum)<abs(max))
            {
                max=sum;
                index1=i;
                index2=j;
            }
        }
    }

    printf("the sum closest to zero is %d\n",max);
    printf("the numbers are %d and %d \n",arr[index1],arr[index2]);
    printf("the indeices of the two numbers are %d and %d\n ",index1,index2);
    return 0;
}
