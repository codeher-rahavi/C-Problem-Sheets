#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name1[20];
    fgets(name1,sizeof(name1),stdin);
    name1[strcspn(name1,"\n")]='\0';

    char name2[20];
    fgets(name2,sizeof(name2),stdin);
    name2[strcspn(name2,"\n")] = '\0';


    for(i=0;name1[i]!='0';i++)
    {
        if(name1[i]>='a' && name1[i]<='z')
        {
            freq1[name1[i]-'a'] = 1;
        }
    }

    for(i=0;name2[i]!='0';i++)
    {
        if(name2[i]>='a' && name2[i]<='z')
        {
            freq1[name2[i]-'a'] = 1;
        }
    }

     for(i=0;i<26;i++)
    {
        if(freq1[i]==1)
        {
            count1++;
        }

        if(freq2[i]==1)
        {
            count2++;
        }
    }



    return 0;
}
