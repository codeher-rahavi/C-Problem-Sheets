#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,cal=0;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=__INT_MAX__;
    int index1=0,index2=0;
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            cal=arr[i]+arr[j];
            if(abs(cal)<abs(sum))
            {
                sum=cal;
                index1=i;
                index2=j;
            }
        }
    }
    printf("the numbers that gives the sum close to zero is %d and %d\n",arr[index1],arr[index2]);
    printf("the indeces are %d and %d",index1,index2);
    return 0;
}
