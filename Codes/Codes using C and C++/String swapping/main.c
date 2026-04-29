#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char s1[15]="Nahid";
char s2[15]="Ibn";
char t[15];
strcpy(t,s1);
strcpy(s1,s2);
strcpy(s2,t);
printf("String number one is: %s\n",s1);
printf("String number two is: %s\n",s2);
return 0;
}
