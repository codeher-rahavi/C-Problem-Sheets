#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,insertion,position;
    scanf("%d",&num);
    int i,arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to insert:");
    scanf("%d",&insertion);
    printf("enter the position to enter :");
    scanf("%d",&position);

    for(i=num-1;i>=position;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position]=insertion;
    num++;
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int temp=0,j;
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
    int c=0,d=0;
    for(i=0;i<num;i++)
    {
        if(arr[i]==insertion)
        {
             printf("the values before and after the insertion element is %d and %d",arr[i-1],arr[i+1]);
             break;

        }
    }
    return 0;
}
