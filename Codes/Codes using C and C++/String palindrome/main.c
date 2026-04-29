#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char s1[30]="mamam";
char s2[30];
int i,j,len=0;
while(s1[i]!='\0'){
    i++;
    len++;
}
for(j=0,i=len-1;i>=0;i--,j++){
    s2[j]=s1[i];
}
s2[j]='\0';
int d=strcmp(s1,s2);
if(d==0)printf("It's a palindrome.\n");
else printf("not a palindrome.\n");
return 0;

}
