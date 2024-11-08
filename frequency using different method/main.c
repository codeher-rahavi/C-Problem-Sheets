#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,count;
    scanf("%d",&num);
    int arr[num],freq[num];
    for (i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(i=0;i<num;i++)
    {
        count=1;
        for(j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
        }
    }
    for(i=0;i<num;i++)
    {
        if(freq[i]!=0)
        {
            printf("the frequency of %d is %d\n",arr[i],freq[i]);
        }
    }
    return 0;
}
