#include <stdio.h>
#include <stdlib.h>
int main(){
char a1[50]="Monkey ";
char a2[]="D Luffy";
int i=0,len=0,j=0;
while(a1[i]!='\0'){
    i++;
    len++;
}
while(a2[j]!='\0'){
    a1[len+j]=a2[j];
    j++;
}
printf("The output is: %s\n",a1);
return 0;
}
