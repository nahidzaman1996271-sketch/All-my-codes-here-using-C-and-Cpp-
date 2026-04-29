#include <stdio.h>
#include <stdlib.h>

int main(){
char s[]="Nahid Ibn Zaman";
int i=0,len=0;
while(s[i]!='\0'){
    i++;
    len++;
}
printf("Length is: %d\n",len);
return 0;
}
