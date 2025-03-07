#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char name;
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';


    return 0;
}
