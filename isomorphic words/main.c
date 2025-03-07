#include <stdio.h>
#include <string.h>
# define MAX 256
int main()
{
    char a[MAX],b[MAX];
    scanf("%s",a);
    scanf("%s",b);

    int map1[MAX]={0};
    int map2[MAX]={0};

    int len1=strlen(a);
    int len2=strlen(b);
    int i,isomorphic=1;
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            if(map1[a[i]]==0 && map2[b[i]]==0)
            {
                map1[a[i]]=b[i];
                map2[b[i]]=a[i];
            }
            else if(map1[a[i]]!=b[i] || map2[b[i]]!=a[i])
            {
                isomorphic=0;
                break;
            }
        }
    }
    else
    {
        printf("false");
    }

    if(isomorphic)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}
