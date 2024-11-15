#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,temp=0;
    printf("enter the array size:");
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<num;i++)
    {
        if(i==1)
        {
            printf("%d",arr[i]);
        }
    }

    return 0;
}
