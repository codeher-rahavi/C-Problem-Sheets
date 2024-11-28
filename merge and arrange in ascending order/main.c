#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,i,j,sum=0,temp=0;
    printf("enter the array size 1:");
    scanf("%d",&num1);
    int arr1[num1];
    for(i=0;i<num1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter array size 2:");
    scanf("%d",&num2);
    int arr2[num2];
    for(i=0;i<num2;i++)
    {
        scanf("%d",&arr2[i]);
    }

    sum=num1+num2;
    int arr3[sum];
    for(i=0;i<num1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=0,j=num1;j<sum;j++,i++)
    {
        arr3[j]=arr2[i];
    }
    for(i=0;i<sum;i++)
    {
        for(j=i+1;j<sum;j++)
        {
            if(arr3[i]>arr3[j])
            {
                temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    printf("the ascending array\n");
    for(i=0;i<sum;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}
