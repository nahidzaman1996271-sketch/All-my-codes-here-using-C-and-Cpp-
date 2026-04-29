#include <stdio.h>
#include <stdlib.h>
int main(){
int a[3][4];
int b[3][4];
printf("The numbers of matrix A\n");
for(int i=0;i<3;i++){

    for(int j=0;j<4;j++){
            printf("A[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
    }
printf("\n");
}
printf("A = ");
for(int i=0;i<3;i++){
        printf("\t");
    for(int j=0;j<4;j++){
        printf("%d ",a[i][j]);
}
printf("\n");
}
printf("The numbers of matrix B: \n");
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
            printf("B[%d][%d]=",i,j);
        scanf("%d",&b[i][j]);
    }
printf("\n");
}
printf("B = ");
for(int i=0;i<3;i++){
        printf("\t");
    for(int j=0;j<4;j++){
        printf("%d ",b[i][j]);
}
printf("\n");
}
return 0;
}
