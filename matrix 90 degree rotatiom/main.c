#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d",&num);
    char a[num][num];
    int i,j,k;
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }

    //transpose

    for(i=0;i<num;i++)
    {
        for(j=i;j<num;j++)
        {
            char temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // rotation

    for(i=0;i<num;i++)
    {
        for(j=0,k=num-1;j<k;j++,k--)
        {
            char temp = a[i][j];
            a[i][j] = a[i][k];
            a[i][k] = temp;
        }
    }

    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
