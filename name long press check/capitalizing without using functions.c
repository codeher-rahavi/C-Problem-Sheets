#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
        {
            name[i]=(name[i]-'a')+65;
        }
        else if(name[i]==' ')

    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(i==0)
        {
            name[i+1]=(name[i+1]-'a')+65;
        }
    }
    printf("%s",name);
    return 0;
}
