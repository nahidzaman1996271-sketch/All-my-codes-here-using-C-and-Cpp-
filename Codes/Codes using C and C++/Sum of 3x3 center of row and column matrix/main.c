#include <stdio.h>

int main() {
int i,j,n;
printf("Enter the numbers: ");
scanf("%d",&n);
int a[n][n];
printf("Enter the matrix input:\n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("\nMatrix:\n");

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

int mid=n/2;
int rowsum=0,comsum=0;
for(i=0;i<n;i++){
    rowsum+=a[mid][i];

}
for(i=0;i<n;i++){
    comsum+=a[i][mid];
}
printf("Sum of row: %d\n",rowsum);
printf("Sum of column: %d\n",comsum);
return 0;
}
