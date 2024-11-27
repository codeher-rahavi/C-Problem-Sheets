#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0;
    scanf("%d",&num);
    int i,arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int max=arr[0];
    for(i=1;i<num;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    int ave=sum/num;
    for(i=0;i<num;i++)
    {
        if(arr[i]<=ave)
        {
            arr[i]=max;
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
