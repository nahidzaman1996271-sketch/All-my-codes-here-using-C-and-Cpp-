#include <stdio.h>
void display(int x[]);
int main(){
int arr[]={10,20,30,40,50};
display(arr);
return 0;
}
void display(int x[]){
int i;
for(i=0;i<5;i++){
    printf("%d ",x[i]);

}
}
