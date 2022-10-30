#include <stdio.h>
int main(void){
    int input;
    int cnt = 0;

    while(1){
        printf("정수를 입력하세요");
        scanf(" %d",&input);
        if(input == 0){
            break;
        }
        if(input%3 != 0 && input%5 != 0){
            cnt = cnt + 1;
        }

    }
    printf("%d",cnt);

    return 0;
}