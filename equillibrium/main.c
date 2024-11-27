#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter the array size:");
    scanf("%d",&num);
    int arr[num];
    int i=0;
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    int number,left,right;

    for(number=1;number<num-1;number++){

        int left_sum = 0;
        for(left = 0;left<number;left++){
            left_sum = left_sum + arr[left];
        }

        int right_sum = 0;
        for(right=number + 1;right<num;right++){
            right_sum = right_sum + arr[right];
        }

        printf("\n");
        if (left_sum == right_sum){
            printf("The equilibrium index is %d",number);
        }

    }

    return 0;
}
