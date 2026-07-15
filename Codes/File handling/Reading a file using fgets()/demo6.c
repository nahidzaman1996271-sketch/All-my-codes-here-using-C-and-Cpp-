#include<stdio.h>
int main(){

    FILE *file;
    char ch[40];
    file = fopen("test.txt","r"); // w means write, a means append, r means read

    if(file==NULL){
        printf("File doesn't not exist");
    }
    else{
        printf("File is opened\n");
        while(!feof(file))
        {
            fgets(ch,39,file);
            printf("%s\n",ch);
        }

        // fgets(variable,size,filepointer);
        fclose(file);
    }

    getch();
}