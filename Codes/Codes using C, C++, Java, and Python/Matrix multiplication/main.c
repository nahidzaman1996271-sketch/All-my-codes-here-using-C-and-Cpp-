#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int x[a][b],y[b][c],z[a][c],i,j,k;
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        scanf("%d",&x[i][j]);
    }
}
for(i=0;i<b;i++){
    for(j=0;j<c;j++){
        scanf("%d",&y[i][j]);
    }
}
for(i=0;i<a;i++){
    for(j=0;j<c;j++){
     z[i][j]=0;
    }
}
for(i=0;i<a;i++){
    for(j=0;j<c;j++){
            for(k=0;k<b;k++){
                z[i][j]+=x[i][k]*y[k][j];
            }
    }
}
printf("\n");
for(i=0;i<a;i++){
    for(j=0;j<c;j++){
     printf("%d ",z[i][j]);
    }
    printf("\n");
}
return 0;
}
