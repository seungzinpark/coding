#include <stdio.h>
int main(void){
    int number;
    printf("1번은 개, 2번은 고양이, 3번은 고양이");
    scanf(" %d",&number);

    switch(number){
        case 1:
            printf("dog");
            break;
        case 2:
            printf("cat");
            break;
        case 3 :
            printf("chick");
            break;
        default : 
           printf("I don't know.");
    }

    return 0;
}