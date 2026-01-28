#include <stdio.h>
#include <stdlib.h>

int sum(int a,int b){
return a+b;
}
int sub(int j,int k){
return j-k;
}
int mul(int m,int n){
return m*n;
}
float division(int c,int d){
return (float)c / d;
}
int main(){
int r;
float f;S
r=sum(10,5);
printf("The sum is: %d\n",r);
r=sub(10,5);
printf("The sub is: %d\n",r);
r=mul(10,5);
printf("The multiply is: %d\n",r);
f=division(10,3);
printf("The division is: %.2f\n",f);
return 0;
}
