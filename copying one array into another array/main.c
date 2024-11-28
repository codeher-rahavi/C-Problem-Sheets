#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d",&num);
    int i,arr[num],arr1[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        arr1[i]=arr[i];
    }
    printf("Array1:");
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
    printf("Array2:");
    for(i=0;i<num;i++)
    {
        printf("%d ",arr1[i]);

    }
    return 0;
}
