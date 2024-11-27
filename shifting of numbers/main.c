#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,i,shift=0;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&shift);
    shift=shift%num;
    int temp[num];
    for(i=0;i<num;i++)
    {
       temp[(i+shift)%num]=arr[i];

    }
    for(i=0;i<num;i++)
    {
        arr[i]=temp[i];
    }
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
