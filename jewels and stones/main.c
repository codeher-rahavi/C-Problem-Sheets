#include<stdio.h>
#include<string.h>
int main()
{
    char jewels[50];
    char stones[50];
    fgets(jewels,sizeof(jewels),stdin);
    fgets(stones,sizeof(stones),stdin);
    jewels[strcspn(jewels,"\n")] = '\0';
    stones[strcspn(stones,"\n")] = '\0';

    int i,j,count=0;

    for(i=0;i<strlen(jewels);i++)
    {
        for(j=0;j<strlen(stones);j++)
        {
            if(jewels[i]==stones[j])
            {
                count++;
            }
        }
    }

    printf("%d",count);
    return 0;
}
