#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,square=0;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("squared array\n");
    for(i=0;i<num;i++)
    {
        square=arr[i]*arr[i];
        printf("%d\n",square);
    }
    square=0;
    return 0;
}
