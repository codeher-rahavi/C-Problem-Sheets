#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,right_sum=0,left_sum=0,count=0;
    printf("enter the array size:");
    scanf("%d",&num);
    int arr[num],right[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            right_sum+=arr[j];
            count++;
            right[i]=right_sum;
        }
        printf("%d ",right_sum);
        right_sum=0;
    }

    printf("\n");
    for(i=0;i<count;i++)
    {
        printf("%d ",right[i]);
    }
    /*printf("\n");
     for(i=0;i<=num;i++)
    {
        for(j=i-1;j<i;j++)
        {
            left_sum+=arr[j];
        }
        printf("%d ",left_sum);
        left_sum=0;
    }
    for(i=0;i<=num;i++)
    {
        if(left_sum[i]==right_sum[i])
        {
            printf("%d ",arr[i]);
        }
    }*/
    return 0;
}
