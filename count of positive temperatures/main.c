#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,count=0;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        if(arr[i]>0)
        {
            count++;
        }
    }
    printf("the number of positive temperatures are %d",count);
    return 0;
}
