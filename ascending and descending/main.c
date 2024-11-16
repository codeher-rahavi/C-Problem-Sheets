#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,front_split=0,back_split=0,front=0,temp=0;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the desired arrar is\n");
    if(num%2!=0)
    {
        front_split=(num+1)/2;
        for(i=0;i<front_split;i++)
        {
            for(j=i+1;j<front_split;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(i=0;i<front_split;i++)
        {
            printf("%d\n",arr[i]);
        }

        back_split=(num-1)/2;
        for(i=back_split+1;i<num;i++)
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
        for(i=back_split+1;i<num;i++)
        {
            printf("%d\n",arr[i]);
        }

    }
    if(num%2==0)
    {
        front_split=num/2;
        for(i=0;i<front_split;i++)
        {
            for(j=i+1;j<front_split;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(i=0;i<front_split;i++)
        {
            printf("%d\n",arr[i]);
        }

        back_split=num/2;
        for(i=back_split;i<num;i++)
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
        for(i=back_split;i<num;i++)
        {
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}
