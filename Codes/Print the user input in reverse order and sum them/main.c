#include <stdio.h>
#include <stdlib.h>

int main(){
int sum=0,n,r;
scanf("%d",&n);
while(n>0){
    r=n%10;
    printf("%d",r);
    n/=10;
    sum+=r;
}
printf(" The sum is : %d\n",sum);
return 0;
}
