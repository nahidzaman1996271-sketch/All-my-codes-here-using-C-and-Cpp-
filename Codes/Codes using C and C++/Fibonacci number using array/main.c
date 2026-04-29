#include <stdio.h>
#include <stdlib.h>

int main(){
int n[7],k;
printf("The limitations of number is: ");
scanf("%d",&k);
n[0]=0;
n[1]=1;
for(int i=2;i<k;i++){
    n[i]=n[i-1]+n[i-2];
}
printf("\n");
for(int i=0;i<k;i++){
    printf("%d\n",n[i]);
}
return 0;

}
