#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];

    file = fopen("test.txt","w"); // w means write

    if(file == NULL){
        printf("File does not exist!");
    }
    else{
        printf("Operation successful, file is opened\n");
        printf("Enter your full name: ");
        gets(name); // stores the string in the name variable

        fputs(name,file);
        printf("File is written successfully");
        fclose(file);
    }

    getch();
}