#include <stdio.h>
#include <stdlib.h>

void maximum_value(int x[],int n);
int main(){
int n;
printf("Enter the limitations: ");
scanf("%d",&n);
int arr[n];
maximum_value(arr,n);
return 0;
}
void maximum_value(int x[],int n){
int i,max,min;
printf("Enter the elements: ");
for(i=0;i<n;i++){
    scanf("%d",&x[i]);
}
max=x[0];
min=x[0];
for(i=0;i<n;i++){
    if(max<x[i]){
        max=x[i];
    }
    if(min>x[i]){
        min=x[i];
    }
}
printf("The maximum value is: %d\n",max);
printf("The minimum value is: %d\n",min);
}
