#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age;

    file = fopen("test.txt","w"); // w means write

    if(file == NULL){
        printf("File does not exist!");
    }
    else{
        printf("File is opened\n");
        
        printf("Enter your name: ");
        gets(name);

        printf("Enter your age: ");
        scanf("%d",&age);

        fprintf(file,"Name = %s, Age = %d\n",name,age);

        printf("File is written successfully");
        fclose(file);
    }

    getch();
}