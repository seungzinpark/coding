#include <stdio.h>
int main(void){
    int input;
    printf("자연수를 입력하세요");
    scanf(" %d",&input);
    
    for(int i = 1; i <= input; i++){
        for(int j = (input-i); j >= 1; j--){
            printf(" ");
        }
        for(int k = 1; k <= i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
