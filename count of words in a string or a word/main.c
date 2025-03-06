#include<stdio.h>
#include<string.h>
int main()
{
    char word[50];
    printf("enter a word or a sentence\n");
    fgets(word,sizeof(word),stdin);

    word[strcspn(word , "\n")] = '\0';

    int i;
    int count=0;


    for(i=0;word[i]!='\0';i++)
    {
        if(word[i]!='')
        {
            count++;
        }

    }
    printf("the count of words: %d",count );
    return 0;
}
