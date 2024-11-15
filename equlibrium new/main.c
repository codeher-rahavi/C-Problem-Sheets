#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,right_sum=0,left_sum=0,right,left;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=1;i<num;i++)
    {
        left_sum=0;
        for(left=0;left<i;left++)
        {
            left_sum+=arr[left];
        }

        right_sum=0;
        for(right=i+1;right<num;right++)
        {
            right_sum+=arr[right];
        }


        if(left_sum==right_sum)
        {
            printf("the equillibrium index is %d",i);
        }

    }
    return 0;
}
