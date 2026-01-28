 #include <stdio.h>
#include <stdlib.h>

int sqr(int num){
return num*num;
}
int main(){
int num;
printf("Enter the number: ");
scanf("%d",&num);
int r=sqr(num);
printf("The square is: %d\n",r);
}
