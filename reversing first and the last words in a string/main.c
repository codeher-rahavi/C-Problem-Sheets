#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    int len=strlen(name);
    int i,j,k=0,l=0;
    char first[10],last[10];
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]!=' ')
        {
            first[k++]=name[i];
        }
        else
        {
            break;
        }

    }
    first[k]='\0';




    for(j=len-1;j>=0;j--)
    {
        if(name[j]!=' ')
        {
            last[l++]=name[j];

        }
        else
        {
            break;
        }
    }
    last[k]='\0';

    int l1=strlen(first);

    for(i=0;i<l1/2;i++)
    {
        char temp=first[i];
        first[i]=first[l1-1-i];
        first[l1-i-1]=temp;
    }

    printf("%s\t",first);
    printf("%s",last);


    return 0;
}
