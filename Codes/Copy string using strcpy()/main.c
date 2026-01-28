#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char r[]="Imma good boy";
char s[20];
strcpy(s,r);
printf("The sentence is: %s\n",r);
printf("The copy sentence is: %s\n",s);
return 0;
}
