#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,i;
   scanf("%d",&num);
   int arr[num];
   for(i=0;i<num;i++)
   {
       scanf("%d",&arr[i]);
   }
   int seen[100]={0};
   for(i=0;i<num;i++)
   {
       if(arr[i]>=0 && arr[i]<=100)
       {
           seen[arr[i]]++;
       }
   }
   for(i=0;i<=num;i++)
   {
       int value=arr[i];
       if(seen[value]>1)
       {
           printf("%d\n",seen[value]*seen[value]);
       }
       else if(seen[value]==1)
       {
           printf("%d\n",value);
           seen[value]=0;
       }
   }
    return 0;
}
