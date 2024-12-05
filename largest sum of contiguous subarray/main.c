#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i,arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max_current=arr[0];
    int max_global=arr[0];
    for(i=1;i<num;i++)
    {
        if(arr[i]>max_current+arr[i])
        {
            max_current=arr[i];
        }
        else
        {
            max_current+=arr[i];
        }
    }
    if(max_current>max_global)
    {
        max_global=max_current;
    }
    printf("the largest sum of contiguous subarray is %d ",max_global);
    return 0;
}
