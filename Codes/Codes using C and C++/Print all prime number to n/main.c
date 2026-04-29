#include <stdio.h>
#include <stdlib.h>
void prime(int n);
int main(){
int num;
scanf("%d",&num);
prime(num);
return 0;
}
void prime(int n){
int i,j;
for(i=1;i<=n;i++){
    for(j=2;j<=i/2;j++){
        if(i%j==0){
            break;
        }
    }
    if(j>i/2){
        printf("%d ",i);
    }
}
}
