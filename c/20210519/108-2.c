#include <stdio.h>
int main(void){
    int input;

    printf("정수를 입력해주세요");
    scanf(" %d",&input);

    if(input > 0){
        printf("plus");
    }
    else if(input < 0){
        printf("minus");
    }
    else if(input == 0){
        printf("zero");
    }
    return 0;
}