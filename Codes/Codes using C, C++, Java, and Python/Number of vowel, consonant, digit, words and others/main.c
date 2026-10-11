#include <stdio.h>
#include <stdlib.h>
int main(){
char s[100],ch;
int i,vowel,con,digit,word,other;
printf("Enter a string: ");
gets(s);
i=vowel=con=digit=word=other=0;
while((ch=s[i])!='\0'){
    if(ch=='a' ||ch=='e' ||ch=='i'||ch=='o' ||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')vowel++;
    else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))con++;
    else if(ch>='0'&& ch<='9')digit++;
    else if(ch==' ')word++;
    else other++;
    i++;
}
word++;
printf("Number of vowel is: %d\n",vowel);
printf("Number of consonant is: %d\n",con);
printf("Number of digit is: %d\n",digit);
printf("Number of word is:%d\n",word);
printf("Other: %d\n",other);
return 0;
}

