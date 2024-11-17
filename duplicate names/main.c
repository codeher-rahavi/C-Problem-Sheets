#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    scanf("%d",&num);
    char names[num][20];
    for(i=0;i<num;i++)
    {
        scanf("%[^\n]%*c",names[i]);
    }
    for(i=0;i<num;i++)
    {
       printf("%s\n",names[i]);
    }
    return 0;
}
