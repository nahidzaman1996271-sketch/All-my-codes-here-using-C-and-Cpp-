#include <stdio.h>
#include <stdlib.h>

int main(){
int n,j[50];
printf("The limitation of numbers: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&j[i]);
}
int max=j[0];
int min=j[0];
for(int i=0;i<n;i++){
    if(max<j[i]){
        max=j[i];
    }
    if(min>j[i]){
        min=j[i];
    }
}
printf("The maximum number is: %d\n",max);
printf("The minimum number is: %d\n",min);
return 0;
}
