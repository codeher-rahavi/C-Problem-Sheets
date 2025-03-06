#include<stdio.h>
#include<string.h>
int main()
{
    char word[50];
    fgets(word,sizeof(word),stdin);

    int i;
    char num[10];
    int j=0;

    for(i=0;word[i]!='\0';i++)
    {
        if(word[i]>='a' && word[i]<='c')
        {
            num[j++]='2';
        }
        if(word[i]>='d' && word[i]<='f')
        {
            num[j++]='3';
        }
        if(word[i]>='g' && word[i]<='i')
        {
            num[j++]='4';
        }
        if(word[i]>='j' && word[i]<='l')
        {
            num[j++]='5';
        }
        if(word[i]>='m' && word[i]<='o')
        {
            num[j++]='6';
        }
        if(word[i]>='p' && word[i]<='s')
        {
            num[j++]='7';
        }
        if(word[i]>='t' && word[i]<='v')
        {
            num[j++]='8';
        }
        if(word[i]>='w' && word[i]<='z')
        {
            num[j++]='9';
        }
    }

    printf("%s",num);
}
