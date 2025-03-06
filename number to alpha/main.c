#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char result[10];
    int index = 0;

    while(n)
    {
        result[index++]='A'+(n-1)%26;
        n=(n-1)/26;
    }

    for(int i=index-1;i>=0;i--)
    {
       printf("%c",result[i]);
    }
    return 0;
