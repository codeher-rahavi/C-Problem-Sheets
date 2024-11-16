#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,sum=0;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<num;i++)
    {
        if(arr[i]%2!=0)
        {
            sum+=arr[i];
        }
    }
    printf("the sum of odd numbers:%d",sum);
    return 0;
}
