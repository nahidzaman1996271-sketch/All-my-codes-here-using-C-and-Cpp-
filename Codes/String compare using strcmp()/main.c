#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char s1[]="Nahid";
char s2[]="Ibn";
int d=strcmp(s1,s2);//if d=0 then it means the two strings are equal.
if(d==0)printf("Strings are equal.\n");
else printf("Strings are not equal.\n");
return 0;
}
