#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';

    char rep;
    scanf("%c",&rep);

    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='?')
        {
            name[i]='.';
        }
    }

    printf("%s",name);
    return 0;
}
