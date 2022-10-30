#include <stdio.h>
int main(void){
    int input;

    while(1){

        printf("점수를 입력하세요.");
        scanf(" %d",&input);
        if(input < 0 || input > 100){
            break;
        }        

        if(input >= 80){
            printf("축하합니다. 합격입니다.\n");
        }
        else{
             printf("죄송합니다. 불합격입니다.\n");
        }
    }

    return 0;
}