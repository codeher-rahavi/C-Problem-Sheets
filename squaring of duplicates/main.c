#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    int seen[100]={0};
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                seen[i]++;
                seen[j]++;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        if(seen[i]==1)
        {
            arr[i]*=arr[i];
        }
    }
    printf("modified array\n");
    for(i=0;i<num;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
