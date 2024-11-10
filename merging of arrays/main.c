#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,i,length=0;
    scanf("%d",&num1);
    int arr1[num1];
    for(i=0;i<num1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&num2);
    int arr2[num2];
    for(i=0;i<num2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    length=num1+num2;
    for(i=0;i<num1;i++)
    {
        printf("%d ",arr1[i]);
    }
     for(i=0;i<num2;i++)
    {
        printf("%d ",arr2[i]);
    }

    return 0;
}
