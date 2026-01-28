#include <stdio.h>
#include <stdlib.h>
int main(){
int n,x=1;
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("%d %d %d PUM\n",x,x+1,x+2);
    x+=4;
}
return 0;
}
