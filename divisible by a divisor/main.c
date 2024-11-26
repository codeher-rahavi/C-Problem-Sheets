#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,count=0,divisor;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&divisor);
    for(i=0;i<num;i++)
    {
        if(arr[i]%divisor==0)
        {
            count++;
        }
    }
    printf("the number of elements that are divisible by the divisor is %d ",count);
    return 0;
}
