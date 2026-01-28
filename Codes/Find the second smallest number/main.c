#include <stdio.h>
#include <stdlib.h>
int main(){
int n;
printf("Enter the number: ");
scanf("%d",&n);
int k[n],i,j;
for(i=0;i<n;i++){
    scanf("%d",&k[i]);
}
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(k[i]>k[j]){
            int a=k[i];
            k[i]=k[j];
            k[j]=a;
        }
    }
}
printf("The second smallest: %d\n",k[1]);
return 0;
}
