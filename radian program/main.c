#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int i;
    float radians=0,cosine=0;
    int num;
    scanf("%d",&num);
    float arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%f",&arr[i]);
    }

    for(i=0;i<num;i++)
    {
        radians=(arr[i]*M_PI)/180;
        cosine= cos(radians);
        printf("angle %.2f is %.2f\n",arr[i],cosine);
    }
    return 0;
}
