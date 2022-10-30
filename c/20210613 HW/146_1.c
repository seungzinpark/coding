#include <stdio.h>
int main(void){
    int input;
    printf("10 이하의 자연수를 입력하세요");
    scanf(" %d",&input);
    for(int i = 1; i <= input; i++){
        printf("JUNGOL\n");
    }

    return 0;
}