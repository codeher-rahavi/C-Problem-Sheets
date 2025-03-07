#include <stdio.h>
#include <string.h>

int main()
{
    char name1[20];
    fgets(name1,sizeof(name1),stdin);
    name1[strcspn(name1,"\n")]='\0';

    char name2[20];
    fgets(name2,sizeof(name2),stdin);
    name2[strcspn(name2,"\n")]='\0';

    int freq[26]={0};
    int i;

    for(i=0;name2[i]!='\0';i++)
    {
        if(name2[i]>='a' && name2[i]<='z')
        {
            freq[name2[i]-'a']=1;
        }
    }
    char temp[20];
    int k=0;
    for(i=0;i<26;i++)
    {
        if(freq[name2[i]-'a']==1)
        {
            temp[k++]=name2[i];
        }
        freq[name2[i]-'a']++;
    }
    printf("%s\n",temp);

    if(strcmp(name1,temp)==0)
    {
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
