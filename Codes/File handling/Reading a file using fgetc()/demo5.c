#include<stdio.h>
int main(){

    FILE *file;

    char ch;

    file = fopen("test.txt","r"); // w means write, a means append, r means read

    if(file==NULL){
        printf("File doesn't not exist");
    }
    else{
        printf("File is opened\n");
       
        while (!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }
        
        fclose(file);
    }

    getch();
}