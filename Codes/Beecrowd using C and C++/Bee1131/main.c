#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,g=0,i=0,m=0,e=0,t;
while(1){
    scanf("%d %d",&a,&b);
    printf("Novo grenal (1-sim 2-nao)\n");
    m++;
    if(a>b)i++;
    else if (b>a)g++;
    else e++;
    scanf("%d",&t);
    if(t==1)continue;
    else break;
}
printf("%d grenais\n",m);
printf("Inter:%d\n",i);
printf("Gremio:%d\n",g);
printf("Empates:%d\n",e);

if(i>g) printf("Inter venceu mais\n");
else if(i<g) printf("Gremio houve vencedor\n");
else printf("Não houve vencedor\n");
return 0;
}
