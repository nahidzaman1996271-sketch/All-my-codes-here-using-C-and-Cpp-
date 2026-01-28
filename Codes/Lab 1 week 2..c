#include <stdio.h>
#include <stdlib.h>

int main(){
int n[10],k,i;
int x=0;
printf("Enter ten integer: \n");
for(int i = 0; i<10; i++){
  scanf("%d", &n[i]);
}
int m;
printf("The value you want to search: ");

scanf("%d",&m);
while(1){

for(int i = 0; i<10; i++){

    if(n[i]==m){
        printf("Element is found and it's position is %d\n",i+1);
        x=1;
        break;
    }
}
if(x==1)break;
    else {
        printf("Re-enter the input: ");
        scanf("%d",&m);
    }
}
return 0;
}
