#include <stdio.h>
int main(void){
    int input;

    while(1){
        printf("정수를 입력하세요");
        scanf(" %d",&input);
        if(input%3 == 0){
            printf("%d\n",input/3);
        }

        if(input == -1){
            break;
        }
    }
    return 0;
}