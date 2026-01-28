#include <stdio.h>
#include <stdlib.h>

int main(){
int n[]={45,12,7,8,6,9,44};
int j,p=-1;
printf("Enter the value u wanna search: ");
scanf("%d",&j);
for(int i=0;i<8;i++){
    if(j==n[i]){
        p=i+1;
        break;
    }
}
if(p==-1)printf("Item is not found\n");
else printf("The item is found at %d\n",p);
return 0;
}
