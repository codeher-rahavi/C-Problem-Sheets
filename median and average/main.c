#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,temp=0,j;
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
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%d\n",arr[i]);
    }
    if(num%2!=0)
    {
        median=(num-1)/2;
        printf("%d",īṁṅṭḥṇī)
    }

    return 0;
}356h65ubgok
