#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,j;
    scanf("%d",&num);
    int i,arr[num],seen[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        seen[i]=-1;
    }
    for(i=0;i<num;i++)
    {
        for(j=1;j<=num;j++)
        {
             if(arr[i]==j*j)
            {
                seen[i]=1;
            }
        }

    }
    for(i=0;i<num;i++)
    {
        if(seen[i]==1)
        {
            printf("%d ",arr[i]);
        }
    }
    for(i=0;i<num;i++)
    {
        if(seen[i]!=1)
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
