#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,max=0,min=0,diff=0;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(i=1;i<num;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    for(i=1;i<num;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("min=%d",min);
    printf("\nmax=%d",max);

    diff=max-min;
    printf("\nthe difference=%d",diff);

    return 0;
}
