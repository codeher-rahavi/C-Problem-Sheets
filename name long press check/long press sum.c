
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    fgets(a,20,stdin);
    fgets(b,20,stdin);
    a[strcspn(a,"\n")] = '\0';
    b[strcspn(b,"\n")] = '\0';

    int l1=strlen(a);
    int l2=strlen(b);
    int i=0,j=0,flag=1,c=0,k;
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
            if(a[i]!=b[j])
            {
                if(b[j]==b[j-1])
                {
                    flag=1;
                    i--;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            i++;
        }
    }
    if(flag==1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}
