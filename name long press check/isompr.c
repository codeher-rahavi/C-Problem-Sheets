#include<stdio.h>
#include<string.h>
# define MAX 256
int main()
{
    char a[20],b[20];
    scanf("%s",a);
    scanf("%s",b);
    int len1=strlen(a),len2=strlen(b);
    int map1[MAX]={0},map2[MAX]={0};
    int i ,isomor=1;
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            if(map1[a[i]]==0 && map2[b[i]]==0 )
            {
                map1[a[i]]=b[i];
                map2[b[i]]=a[i];
            }
            else if(map1[a[i]]!=b[i] && map2[b[i]]!=a[i])
            {
                isomor=0;
                break;
            }
        }
    }
    else
    {
        printf("false");
        return 0;
    }



    if(isomor==0)
    {
        printf("false");
    }
    else
    {
        printf("true");
    }
    return 0;
}
