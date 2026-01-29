#include <stdio.h>
int main(){
int t,n;
scanf("%d",&t);
while(t--){
    int sum = 0;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)printf("%d eh perfeito\n",n);
    else printf("%d nao eh perfeito\n",n);
}
return 0;
}
