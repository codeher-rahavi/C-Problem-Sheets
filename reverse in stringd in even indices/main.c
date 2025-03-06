#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = ' ';

    int row=0,col=0,i=0;
    char str[20][10];

    while(name[i]!='\0')
    {
        if(name[i]!=' ')
        {
            str[row][col++]=name[i];
        }
        else if(col>0){
            str[row][col]='\0';
            row++;
            col=0;
        }
        i++;
    }
    str[row][col]='\0';

    int j;
    for(i=0;i<row;i++)
    {
        if(i%2!=0)
        {
            int len=strlen(str[i]);
            for(j=0;j<len/2;j++)
            {
                char temp= str[i][j];
                str[i][j] = str[i][len-j-1];
                str[i][len-j-1]=temp;
            }
        }
    }


    for(i=0;i<row;i++)
    {
        printf("%s\t",str[i]);
    }

    return 0;
}
