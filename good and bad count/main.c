#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';

    int i,j,vowel_count=0,const_count=0;
    int max_count=5;

    for(i=0;i<strlen(name);i++)
    {
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
        {
            vowel_count++;
            const_count=0;
        }
        else
        {
            const_count++;
            vowel_count=0;

        }
          if((vowel_count>5) || (const_count>3))
        {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}
