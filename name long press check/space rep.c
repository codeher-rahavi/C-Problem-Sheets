#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';

    char temp[30];
    int i,j=0;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]!=' ')
        {
            temp[j++]=name[i];
        }
        if(name[i]==' ')
        {
            temp[j++]='%';
            temp[j++]='2';
            temp[j++]='0';
        }
    }
    printf("%s",temp);

    return 0;
}
