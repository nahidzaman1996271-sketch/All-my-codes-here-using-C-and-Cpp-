#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
scanf("%d",&n);
float a,b;
for(int i=1;i<=n;i++){
    scanf("%f %f",&a,&b);
    if(b==0)printf("divisao impossivel\n");
    else printf("%.1f\n",a/b);
}
return 0;
}
