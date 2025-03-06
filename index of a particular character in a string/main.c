#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]= '\0';

    char find[10];
    scanf("%s",find);

    int i;

    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]== find[0])
        {
            printf("%d",i);
        }
    }
    return 0;
}
