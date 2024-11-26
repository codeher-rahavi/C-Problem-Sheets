#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,temp=0,count=0;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x=0;
    for(i=x;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                temp=arr[i];
                count++;
                break;
            }
        }
        x++;
    }
    if(temp!=0)
    {
      printf("the last repeated element is : %d ",temp);
    }
    else
    {
        printf("no repeated elements found");
    }

    return 0;
}
