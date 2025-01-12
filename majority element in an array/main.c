#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,count;
    scanf("%d",&num);
    int arr[num],seen[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        seen[i]=-1;
    }
    int array_size= num/2;//the sizeof int is 2.


    for(i=0;i<num;i++)
    {
        count=1;
        for(j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                seen[j]=0;

            }
        }
        if(seen[i]!=0)
        {
            seen[i]=count;
        }
    }

    for(i=0;i<num;i++)
    {
        if(seen[i]>array_size)
        {
            printf("%d is the majority element",arr[i]);
        }
    }
    return 0;
}
