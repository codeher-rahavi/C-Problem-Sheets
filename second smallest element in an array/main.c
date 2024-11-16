#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter the array size:");
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    return 0;
}
