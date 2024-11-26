#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,temp=0;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[num-1-i];
        arr[num-1-i]=temp;
    }


    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
