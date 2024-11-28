#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,shift;
    scanf("%d",&num);
    int i,arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("input the number of times to rotate:");
    scanf("%d",&shift);
    shift=shift%num;
    int temp[num];
    for(i=0;i<num;i++)
    {
        temp[i]=arr[(i+shift)%num];
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
