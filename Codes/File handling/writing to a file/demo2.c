#include<stdio.h>
int main(){

    FILE *file;
    char name[20] = "Nahid Ibn Zaman";
    int length = strlen(name);
    int i;

    file = fopen("test.txt","w"); // w means write, a means append, r means read

    if(file==NULL){
        printf("File doesn't not exist");
    }
    else{
        printf("File is opened\n");
        for(i=0; i<length; i++){
            fputc(name[i],file);
        }
        printf("File is written successfully!\n");
        fclose(file);
    }

    getch();
}