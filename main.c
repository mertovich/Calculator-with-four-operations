#include <stdio.h>

int collection(int x,int y){
    return printf("Answer : %d",x + y);
}

int subtract(int x,int y){
    return printf("Answer : %d",x - y);
}

int multiply(int x,int y){
    return printf("Answer : %d",x * y);
}

int divide(int x,int y){
    return printf("Answer : %.0d",x / y);
}

int main() {
    char control;
    int vote;
    int x;
    int y;

    do{
        printf("---simple Calculator---\n");
        printf("[1] Collection\n");
        printf("[2] Subtract\n");
        printf("[3] Multiply\n");
        printf("[4] Divide\n");
        printf("Enter your selection : ");
        scanf("%d",&vote);
        printf("Vote : %d\n",vote);
        printf("-----------------------\n");
        printf("1. Enter the number\n");
        scanf("%d",&x);
        printf("2. Enter the number\n");
        scanf("%d",&y);
        printf("-----------------------\n");

        switch (vote) {
            case 1:
                collection(x,y);
                break;

            case 2:
                subtract(x,y);
                break;

            case 3:
                multiply(x,y);
                break;

            case 4:
                divide(x,y);
                break;

            default:
                printf("You made a wrong choice");
                break;
        }
        printf("\n");
        printf("-----------------------\n");
        printf("Do you want to continue [Y/n] : ");
        scanf("%s",&control);

    }while (control == 'y');

    return 0;
}
