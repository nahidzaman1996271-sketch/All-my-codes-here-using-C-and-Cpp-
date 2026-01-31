#include <stdio.h>
int main()
{
    int n, pos, i ,value;
    int arr[10]={10,20,30,40,50};
    n = 5;
    printf("The elements of the array is: \n\n");
    for( i = 0 ; i < n; i++){
        printf("The elements of index %d is: %d\n",i , arr[i]);
    }
    printf("\n");
printf("Enter the position or index where you want to insert new value: ");
scanf("%d", &pos);
printf("\n");
printf("Enter the value: ");
scanf("%d",&value);
printf("\n");
for (i = n-1;i>= pos; i--){
    arr[i+1]=arr[i];
}
arr[pos] = value;
n = n+1;
printf("Array after insertion: \n\n");
for( i = 0 ; i < n; i++){
        printf("Elements at index %d is: %d\n",i,arr[i]);
    }
    printf("\nThe total length is: %d",n);
    return 0;
}
