#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,position;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("element to delete:");
    scanf("%d",&position);
    for(i=0;i<num;i++)
    {
        if(i==position)
        {
            continue;
        }
        else
        {
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}
