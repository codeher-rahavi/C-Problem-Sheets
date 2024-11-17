#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,comp;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&comp);
    for(i=0;i<num;i++)
    {
        if(arr[i]<comp)
        {
            printf("%d\n",arr[i]);
        }
    }

    return 0;
}
