#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0';

    int i,count=0;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>='A' && name[i]<='Z')
        {
            continue;
        }
        if(name[i]>='a' && name[i]<='z')
        {
            continue;
        }
        if(name[i]>='0' && name[i]<='9')
        {
            continue;
        }
        else{
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
