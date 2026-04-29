#include <stdio.h>

int sum(int a,int b){
return a+b;
}
float division(int a,int b)
{

    return (float)a/b;
}
int sub(int a,int b)
{

    return a-b;
}
int mul(int a,int b)
{

    return a*b;
}



int main(){
int r,a,b;
float g;
 scanf("%d %d",&a,&b);
r=sum(a,b);
printf("The sum is: %d\n",r);
g=division(a,b);
printf("The division is %.2f\n",g);
r=sub(a,b);
printf("The sub is %d\n",r);
r=mul(a,b);
printf("The multiplication is %d\n",r);
}
