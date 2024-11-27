#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d",&num);
    int i,arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    int first=arr[0]+arr[num-1];
    int last=arr[1]+arr[num-2];
    int sum=first +last;
    printf("the sum of first and last numbers is %d",sum);
    return 0;
}
