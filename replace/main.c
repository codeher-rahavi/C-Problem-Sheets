#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j=0,min=0;
    scanf("%d",&num);
    int arr[num],arr1[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<num;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("min %d",min);
    printf("\n");
    for(i=0;i<num;i++)
    {
        if(arr[i]!=min)
        {
            arr1[j++]=arr[i];
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}
