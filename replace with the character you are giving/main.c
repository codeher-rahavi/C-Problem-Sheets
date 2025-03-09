#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';

    char c;
    scanf("%c",&c);

    int i,k=0;
    char temp[20];

    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]!=' ')
        {
            temp[k++]=name[i];
        }
        else if(name[i]==' '){
            temp[k++]=c;
        }
    }

    printf("%s",temp);
    return 0;
}
