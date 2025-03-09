#include<stdio.h>
#include<string.h>
int main()
{
    char name1[20],name2[20];
    scanf("%s",name1);
    scanf("%s",name2);
    int i,j;

    int len1=strlen(name1);
    int len2=strlen(name2);
    if(len1!=len2)
    {
        printf("string length are not equal.");
        return 0;
    }

    for(i=0;name1[i]!='\0';i++)
    {
        for(j=i+1;name1[j]!='\0';j++)
        {
            if(name1[i]>name1[j])
            {
                char temp=name1[i];
                name1[i]=name1[j];
                name1[j]=temp;
            }
        }
    }

    for(i=0;name2[i]!='\0';i++)
    {
        for(j=i+1;name2[j]!='\0';j++)
        {
            if(name2[i]>name2[j])
            {
                char temp=name2[i];
                name2[i]=name2[j];
                name2[j]=temp;
            }
        }
    }

    if(strcmp(name1,name2)==0)
    {
        printf("anagram");
    }
    else
    {
        printf("not an anagram");
    }
    return 0;
}
