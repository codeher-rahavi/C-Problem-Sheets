#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,target,sum=0;
    scanf("%d",&num);
    int i,j,arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the target element:");
    scanf("%d",&target);
    for(i=0;i<num;i++)
    {
        for(j=i+i;j<num;j++)
        {
            sum=arr[i]+arr[j];
            if(sum==target)
            {
                printf("%d and %d are the indices",i,j);
            }
        }
    }
    return 0;
}
