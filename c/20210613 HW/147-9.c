#include <stdio.h>
int main(void){
    int input;
    printf("정수를 입력하세요");
    scanf(" %d",&input);
    for(int i = 1; i <= input; i++){
        for(int j = 1; j <= input; j++){
            printf("(%d, %d) ",i,j);
        }
        printf("\n");
    }
    return 0;
}