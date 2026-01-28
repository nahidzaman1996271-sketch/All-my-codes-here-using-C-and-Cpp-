#include <stdio.h>
int main(){
int max_value = 0;
int position = 0;
int n,num;
scanf("%d",&n);
for(int i = 0; i<n;i++){
    scanf("%d",&num);
    if(num>max_value){
       max_value=num;
        position = i+1;

       }
}
printf("%d\n",max_value);
printf("%d\n",position);
}
