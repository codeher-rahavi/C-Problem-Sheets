#include<stdio.h>
#include<string.h>
int main()
{
    int num,size;
    scanf("%d",&num);
    scanf("%d",&size);
    char name[num][size];
    int i,j;
    for(i=0;i<num;i++)
    {
        scanf("%s",name[i]);
    }
    for(i=0;i<num;i++)
    {
        if(i%2!=0)
        {
            int len=strlen(name[i]);
            for(j=0;j<len/2;j++)
            {
                char temp=name[i][j];
                name[i][j]=name[i][len-j-1];
                name[i][len-j-1]=temp;
            }
        }
    }

    for(i=0;i<num;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}
