#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    fgets(str,sizeof(str),stdin);
    int position,sub_len;

    scanf("%d",&position);
    scanf("%d",&sub_len);

    int i;
    char word[50];
    int k=0;


    for(i=position-1;i<sub_len+position;i++)
    {
        word[k++]=str[i];
    }


    printf("%s",word);

    return 0;
}
