#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='a')
        {
            name[i]='b';
        }
        else if(name[i]=='e')
        {
            name[i]='f';
        }
        else if(name[i]=='9')
        {
            name[i]='d';
        }
    }

    printf("%s",name);
    return 0;
}
