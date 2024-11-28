#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,element;
    scanf("%d",&num);
    int i,arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number to be searched");
    scanf("%d",&element);
    for(i=0;i<num;i++)
    {
        if(arr[i]==element)
        {
            printf("element found at index:%d",i);
        }
    }
    return 0;
}
