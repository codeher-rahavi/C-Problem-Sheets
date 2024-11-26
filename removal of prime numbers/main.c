#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int prime_check(int num)
{
    int i;
    if(num<=1)
    {
        return 1;
    }
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int num,i;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<num;i++)
    {
        if(prime_check(arr[i]))
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
