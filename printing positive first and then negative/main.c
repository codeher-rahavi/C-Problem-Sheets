#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main()
{
    int arr[MAX],i;
    for(i=0;i<MAX;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the positive numbers are:\n");
    for(i=0;i<MAX;i++)
    {
        if(arr[i]>0)
        {
            printf("%d \n",arr[i]);
        }
    }
    printf("the negative numberrs are:\n");
    for(i=0;i<MAX;i++)
    {
        if(arr[i]<0)
        {
            printf("%d\n",arr[i]);
        }
    }

    return 0;
}
