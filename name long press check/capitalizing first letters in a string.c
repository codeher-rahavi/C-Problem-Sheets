#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char name[20];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]=' ';

    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(i==0)
        {
            name[i]=toupper(name[i]);
        }
        if(name[i]==' ')
        {
            name[i+1]=toupper(name[i+1]);
        }
    }
    printf("%s",name);
    return 0;
}
