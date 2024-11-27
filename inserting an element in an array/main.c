#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,insert,position,temp=0,temp2=0;
    printf("enter the array size:");
    scanf("%d",&num);
    int i,arr[num];
    printf("enter the elements:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number to insert:");
    scanf("%d",&insert);
    printf("enter the position to insert:");
    scanf("%d",&position);

    for(i=(num-1);i>=position;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position]=insert;
    num++;
    for(i=0;i<num;i++)
    {
            printf("%d ",arr[i]);
    }
    return 0;
}
