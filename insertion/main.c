#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,element,position;
    scanf("%d",&num);
    int i,arr[num];
    printf("input array elements:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("input element to insert:");
    scanf("%d",&element);
    printf("input position where to insert:");
    scanf("%d",&position);

    for(i=num-1;i>=position;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position]=element;
    num++;
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
