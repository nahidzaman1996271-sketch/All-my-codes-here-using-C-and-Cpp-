#include <stdio.h>
#include <stdlib.h>

int maximumv(int x[]);
int main(){
int arr[]={10,20,30,40,50};
int result=maximumv(arr);
printf("The maximum value is: %d\n",result);
}
int maximumv(int x[]){
int i,max=x[0];
for(i=0;i<5;i++){
    if(max<x[i]){
            max=x[i];
    }

}
  return max;
}
