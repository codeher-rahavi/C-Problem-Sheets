#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';

    int i,count=0;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]!=' ' && name[i]!='\0')
        {
            count++;
        }
    }
    if(count%2==0)
    {
        printf("even");
    }
    else if(count%3==0){
        printf("odd");
    }
    else{
        printf("prime");
    }


    return 0;
}
