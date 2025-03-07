#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char name[30];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';

    int i,total=0,current=0;
    for(i=0;name[i]!='\0';i++)
    {
        if(isdigit(name[i]))
        {
            current=(current*10)+name[i]-'0';
        }
        else if(current!=0)
        {
            total+=current;
            current=0;
        }
    }
    if(current!=0)
    {
        total+=current;
    }
    printf("%d",total);
    return 0;
}
