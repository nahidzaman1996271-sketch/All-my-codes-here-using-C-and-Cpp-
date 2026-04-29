#include <stdio.h>
#include <stdlib.h>

void calculate_power(int base,int exp);

int main(){
int base, exp;
scanf("%d %d",&base,&exp);
calculate_power(base,exp);
return 0;
}
void calculate_power(int base, int exp){
int i,result=1;
for(i=1;i<=exp;i++){
    result = result * base;

}
printf("The value is: %d\n",result);
}
