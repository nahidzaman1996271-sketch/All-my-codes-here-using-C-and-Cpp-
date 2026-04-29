#include <stdio.h>

int main(){

    int stack[5];
    int top=-1;
    int in;

    while(1){
           printf("1. Push.\n");
          printf("2. Pop.\n");
          printf("3. Display.\n");
          printf("4. Exit.\n");
          printf("\nThe command is: ");
        scanf("%d",&in);
        while(in>4 || in<1){
            printf("Invalid Command! Please Try Again: ");
            scanf("%d",&in);
        }

        if(in==1){
            top++;
            if(top>4){
                printf("\n\nError, Stack Overflow!!!\n\n");
                top--;
            }
            else{
                printf("Please give Number to Push into Stack: ");
            scanf("%d",&stack[top]);
            }
        }
        if(in==2){
            top--;
            if(top<-1){
                printf("Error, Stack Underflow!!!\n");
                top++;
            }
        }

        if(in==3){
                printf("Elements of the Stack:\n");
                printf("=========\n");
            for(int i=top;i>-1;i--){
                printf("%d\n",stack[i]);
            }
            printf("========\n");
        }
        if(in==4){
            printf("Exiting Program......\n");
            break;
        }

        if(in==1 || in==2){
            printf("\nCurrent Elements of the Stack:\n");
            printf("======\n");
            for(int i=top; i>-1; i--){
                printf("%d\n",stack[i]);
            }
            printf("======\n");
        }
    }


    return 0;
}
