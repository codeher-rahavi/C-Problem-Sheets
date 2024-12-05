#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,number=1,copy=0;
    scanf("%d",&num);
    int arr1[num],arr2[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<num;i++)
    {
       arr2[i]=arr1[i];
    }


    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr2[i]<arr2[j])
            {
                copy=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=copy;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%d ",arr2[i]);
    }


    return 0;
}
