#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,first,last,fdigit=0,ldigit=0,sum=0,total=0;
    scanf("%d",&num);
    while(num<4)
    {
        printf("invalid\ngive number greater than 3");
        printf("enter number:");
        scanf("%d",&num);
    }
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<2;i++)
    {
        sum+=arr[i]+arr[num-1-i];
    }
    printf("%d",sum);


    return 0;
}
