#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    int i;
    if(n<=1)
    {
        return 0;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int seen[1000]={0};
    int num,i;
    printf("enter the array size:");
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("prime numbers:\n");
    for(i=0;i<num;i++)
    {
        if(is_prime(arr[i]))
        {
            seen[arr[i]]++;
          //  printf("%d ",arr[i]);
        }
    }
    for(i=0;i<num;i++)
    {
        if(seen[i]>0)
        {
            printf("the frequency of %d is %d",i,seen[i]);
        }
    }
}
