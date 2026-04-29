#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char s1[]="My name is ";
char s2[]="Nahid Ibn Zaman";
strcat(s1,s2);
printf("The concatenation is: %s\n",s1);
return 0;
}
