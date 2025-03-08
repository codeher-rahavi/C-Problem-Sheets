#include<stdio.h>
#include<string.h>
int main()
{
    char num[10];
    scanf("%s",num);
    int len=strlen(num);
    char original[10];
    strcpy(original,num);

    int i,j,n1=-1,n2=-1;
    for(i=len-1;i>0;i--)
    {
        if(num[i]>num[i-1])
        {
            n1=i-1;
            break;
        }
    }

    if(n1==-1)
    {
       printf("no next permuations");
       return 0;

    }

    for(j=len-1;j>n1;j--)
    {
        if(num[j]>num[n1])
        {
            n2=j;
            break;
        }
    }
    char temp=num[n1];
    num[n1]=num[n2];
    num[n2]=temp;

    for(i=n1+1;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(num[i]>num[j])
            {
                char temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }

    printf("%s",num);


    return 0;
}
