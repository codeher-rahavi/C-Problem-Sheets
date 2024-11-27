#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,element;
    scanf("%d",&num);
    int i,j,arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be removed");
    scanf("%d",&element);
    for(i=0;i<num;i++)
    {
        if(arr[i]==element)
            {
                arr[i]=0;
                break;
            }
    }
    for(i=0;i<num;i++)
    {
        if(arr[i]!=0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
