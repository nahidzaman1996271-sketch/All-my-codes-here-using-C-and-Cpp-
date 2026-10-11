#include <stdio.h>
#include <stdlib.h>

int main(){
int n[80],j;
printf("The limitations of number is: ");
scanf("%d",&j);
for(int i=0;i<j;i++){
    scanf("%d",&n[i]);
}
int min=n[0];
for(int i=0;i<j;i++){
    if(min>n[i]){
        min=n[i];
    }
}
printf("The minimum number is :%d\n",min);
return 0;
}
