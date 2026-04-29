#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
int x[a][b],y[a][b],z[a][b],i,j;
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        scanf("%d",&x[i][j]);
    }
}
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        scanf("%d",&y[i][j]);
    }
}
printf("\n");
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
       z[i][j]=x[i][j]+y[i][j];
    }
}

    for(i=0;i<a;i++){
    for(j=0;j<b;j++){
            printf("%d ",z[i][j]);
}
printf("\n");
}
return 0;
}
