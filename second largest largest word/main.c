#include <stdio.h>
#include <string.h>
# define MAX 10
int main()
{
    int num,i;
    scanf("%d",&num);

    char name[num][MAX];
    for(i=0;i<num;i++)
    {
        scanf("%s",name[i]);
    }

    int numb[num],k=0;
    for(i=0;i<num;i++)
    {
        int a=strlen(name[i]);
        numb[k++]=a;
    }
    int first=0,second=0;

    for(i=0;i<num;i++)
    {
        if(numb[i]>first)
        {
            second=first;
            first=numb[i];
        }
        else if(numb[i]>second && numb[i]<first)
        {
            second=numb[i];
        }
    }
    printf("%d",second);


    return 0;
}
