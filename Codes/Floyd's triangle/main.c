#include <stdio.h>
#include <stdlib.h>

int main(){
int n,i,j,count=0;
printf("Enter N = ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        printf("%d ",++count);
    }
    printf("\n");
}
return 0;
}
