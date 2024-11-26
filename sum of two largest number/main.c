#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,temp=0;
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
    int sum=arr[0]+arr[1];
    printf("the sum of first two greatest number %d",sum);
    return 0;
}
