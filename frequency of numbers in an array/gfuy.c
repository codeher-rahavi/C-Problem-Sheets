#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    int freq[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                freq[i]=a[i]*a[i];
                freq[j]=a[i]*a[i];
            }
        }
    }
    for(i=0;i<n;i++){
        if(freq[i]==0){
            freq[i]=a[i];
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",freq[i]);
    }

    return 0;
}
