#include<stdio.h>
int main(){

    FILE *file;
    char fname[20];
    char lname[20];
    file = fopen("test.txt","r"); // w means write, a means append, r means read

    if(file==NULL){
        printf("File doesn't not exist");
    }
    else{
        printf("File is opened\n");

        fscanf(file,"%s %s",fname,lname);
        printf("%s %s\n",fname,lname);
        
        fclose(file);
    }

    getch();
}