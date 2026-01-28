#include <stdio.h>
int main(){
int n[100],j;
printf("The limitation of numbers: ");
scanf("%d",&j);
for(int i=0;i<j;i++){
    scanf("%d",&n[i]);
}
int max=n[0];
int min=n[0];
for(int i=0;i<j;i++){
    if(max<n[i]){
        max=n[i];
    }
}
printf("The maximum number is: %d\n",max);
return 0;
}
