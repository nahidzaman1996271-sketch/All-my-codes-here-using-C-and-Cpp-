#include <stdio.h>
int main(){
int n;
printf("How many elements you want to enter: ");
scanf("%d",&n);
int A[n],f=0,x=0,m;
printf("Enter the elements: ");
for(int i=0; i<n;i++){
    scanf("%d",&A[i]);
}
int low=0,high = n-1,mid;
if(A[0]<A[1]){
    printf("Enter number to search: ");
    scanf("%d",&m);
    while(low<=high){
        mid = (high+low)/2;
        if(A[mid]==m){
                printf("Element found at %d\n",mid+1);
            f=1;
            break;
        }
        else if(A[mid]<m){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    if(f==0)printf("Element not found.\n");
}
else{
        printf("Enter number to search: ");
    scanf("%d",&m);
    while(low<=high){
        mid = (high+low)/2;
        if(A[mid]==m){
                   printf("Element found at %d\n",mid+1);
            f=1;
            break;
        }
        else if(A[mid]<m){
                 high = mid-1;

        }
        else {
             low = mid+1;
        }
    }

    if(f==0)printf("Element not found.\n");

}
return 0;
}

