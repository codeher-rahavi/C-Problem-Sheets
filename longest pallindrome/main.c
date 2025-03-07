#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0';
    int len=strlen(name);
    int i,j;
    int l=0,r=len-1;

    for(i=l,j=r; i<j; i++,j--)
    {
        while(i<j && (!isalpha(name[i])))
          {
              i++;
          }
        while(i<j && (!isalpha(name[j])))
            {
                j--;
            }
        if(i<j)
        {
           char temp = name[i];
            name[i]=name[j];
            name[j]=temp;
        }
    }

    printf("%s",name);
    return 0;
}
