#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,temp=0;
    scanf("%d",&num);
    int i,arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[num-i-1];
        arr[num-i-1]=temp;
    }
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
