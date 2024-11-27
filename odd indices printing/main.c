#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d",&num);
    int i,arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        if(i%2!=0)
        {
            if(arr[i]%2!=0)
            {
                continue;
            }

        }
        printf("%d ",arr[i]);


    }
    return 0;
}
