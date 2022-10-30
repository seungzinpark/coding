#include <stdio.h>
int main(void){
    int input;

    while(1){
    printf("number? ");
    scanf(" %d",&input);

        if(input == 0){
            printf("0");
            break;
        }
        if(input > 0){
            printf("positive integer\n");
        }else{
            printf("negative number\n");
        }

    }

    return 0;
}