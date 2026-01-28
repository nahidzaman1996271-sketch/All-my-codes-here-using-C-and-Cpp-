#include <stdio.h>
#include <stdlib.h>
int main(){
int n,i,j;
printf("Enter the number of matrix: ");
scanf("%d",&n);
int a[n][n];
printf("Enter the elements in the matrix:\n");
for( i=0;i<n;i++){
    for( j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("\n");
printf("Matrix:\n");
for(i=0;i<n;i++){
    for( j=0;j<n;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
printf("\n Sum for each row:\n");
for( i=0;i<n;i++){
        int sumrow=0;
    for( j=0;j<n;j++){
     sumrow+=a[i][j];
    }
   printf("Row number %d is sum %d\n",i+1,sumrow);
}
printf("\nSum for each column:\n");
for( j=0;j<n;j++){
        int sumcom=0;
    for(i=0;i<n;i++){
     sumcom+=a[i][j];
    }
   printf("Column number %d is sum %d\n",j+1,sumcom);
}

return 0;
}
