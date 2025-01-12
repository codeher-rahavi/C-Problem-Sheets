#include<stdio.h>
#include<string.h>
int main()
{
    char name_1[10],temp;
    int i,j,c=0;
    printf("enter a name:");
    scanf("%s",name_1);
    int len=strlen(name_1);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(name_1[i]>name_1[j])
            {
                temp=name_1[i];
                name_1[i]=name_1[j];
                name_1[j]=temp;
            }
        }
    }
    char name_2[10];
    printf("enter name 2:");
    scanf("%s",name_2);
    int len2=strlen(name_2);
    if(len!=len2)
    {
        printf("False");
        return 0;
    }

    for(i=0;i<len2;i++)
    {
        for(j=i+1;j<len2;j++)
        {
            if(name_2[i]>name_2[j])
            {
                temp=name_2[i];
                name_2[i]=name_2[j];
                name_2[j]=temp;
            }
        }
    }

    if(strcmp(name_1,name_2)==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
