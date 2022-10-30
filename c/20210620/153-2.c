#include <stdio.h>
int main(void){
    int input;
    printf("자연수를 입력하세요");
    scanf(" %d",&input);

    for(int i = 1; i <= input; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
