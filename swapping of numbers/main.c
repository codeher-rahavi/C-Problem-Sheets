#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,temp1,temp2,i;
    scanf("%d",&num);
    if(num<4)
    {
        printf("invalid input");
    }
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp1=arr[0];
    temp2=arr[1];
    arr[0]=arr[num-1];
    arr[1]=arr[num-2];
    arr[num-1]=temp1;
    arr[num-2]=temp2;
    for(i=0;i<num;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
