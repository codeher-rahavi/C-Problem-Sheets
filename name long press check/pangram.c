#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    int i,freq[26]={0};
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>='a' && name[i]<='z')
        {
            freq[name[i]-'a']=1;
        }
    }
    int flag=0;
    for(i=0;i<26;i++)
    {
        if(freq[i]==1)
        {
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("panagram");
    }
    else{
        printf("not a panagram");
    }
    return 0;t
}
