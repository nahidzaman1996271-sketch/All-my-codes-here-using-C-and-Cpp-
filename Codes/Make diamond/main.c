#include <stdio.h>
#include <stdlib.h>
int main(){
int n;
printf("The number: ");
scanf("%d",&n);
int j,i;
for( i=1;i<=n;i++){
    for( j=1;j<=n-i;j++){
        printf(" ");
    }

for( j=1;j<=i;j++){
    printf("* ");
}

printf("\n");
}
}
