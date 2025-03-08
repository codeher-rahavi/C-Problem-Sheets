#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';

    int i,original=0,total=0;

    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>='0' && name[i]<='9')
        {
            original=(original*10) + (name[i]-'0');
        }
        else if(original!=0)
        {
            total+=original;
            original=0;
        }
    }

    if(original!=0)
    {
        total+=original;
    }

    printf("%d",total);
    return 0;
}
