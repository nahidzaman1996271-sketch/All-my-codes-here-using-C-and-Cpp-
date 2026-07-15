#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age,num,i=0;
    long phoneNumber;

    file = fopen("student.txt","a"); // a means append

    if(file==NULL){
        printf("File doesn't exist");
    }
    else{
        printf("File is opened\n");

        printf("Enter number of students: ");
        scanf("%d",&num);

        for(i=1;i<=num;i++){
            printf("Enter student name: ");
            scanf("%s",name);

            printf("Enter student age: ");
            scanf("%d",&age);

            printf("Enter student phone number: ");
            scanf("%ld",&phoneNumber);

            fprintf(file,"%-15s%-8d%-15ld\n",name,age,phoneNumber);
        }
        fclose(file);
    }

    return 0;
}