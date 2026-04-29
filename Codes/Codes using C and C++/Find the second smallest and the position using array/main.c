#include <stdio.h>
int main(){
int n;
printf("Enter the limit: ");
scanf("%d",&n);
int k[n],i,j;
int p[n];

printf("Enter the values: ");
for(i=0;i<n;i++){
    scanf("%d",&k[i]);
p[i]=i+1;
}

for (i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
    if(k[i]>k[j]){
        int a=k[i];
        k[i]=k[j];
        k[j]=a;

        int q = p[i];
        p[i]=p[j];
        p[j]=q;

    }

}

}
printf("The second smallest number: %d\n",k[1]);
printf("The position is: %d\n",p[1]);
return 0;
}
