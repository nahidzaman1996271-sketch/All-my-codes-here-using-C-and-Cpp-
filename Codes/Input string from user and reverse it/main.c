#include <stdio.h>
#include <stdlib.h>


int main(){
char s1[30];
char s2[30];
printf("Enter the input:");
gets(s1);
int i,j,len=0;
while(s1[i]!='\0'){
    len++;
    i++;
}
for(j=0,i=len-1;i>=0;i--,j++){
    s2[j]=s1[i];
}
s2[j]='\0';
printf("The reverse string is: %s",s2);
}
