#include <math.h>
#include <stdio.h>
int main(){
int a,b;
int temp;


while(1){
        scanf("%d %d",&a,&b);
        if(a<=0 || b<=0)break;
        int sum=0;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    for(int i=a;i<=b;i++){
        printf("%d ",i);
         sum+=i;
    }


    printf("Sum=%d\n",sum);
}
return 0;
}
