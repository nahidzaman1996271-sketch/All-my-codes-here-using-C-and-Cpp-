#include <stdio.h>
#include <stdlib.h>

int main(){
int n,k[20],a;
printf("The number of elements: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&k[i]);
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(k[i]>k[j]){
            a=k[i];
            k[i]=k[j];
            k[j]=a;
        }
    }
}
printf("The ascending order: ");
for(int i=0;i<n;i++){
printf("%d ",k[i]);
}

return 0;
}
