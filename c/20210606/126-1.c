#include <stdio.h>
int main(void){
    int cnt = 1;
    int input;

    printf("정수를 입력하세요");
    scanf(" %d",&input);
    
    // while(1){
    //     printf("%d",cnt);
    //     if(cnt == input) {
    //         break;
    //     }
    //     cnt = cnt + 1;
    // }

    while(cnt <= input) {
        printf("%d",cnt);
        cnt = cnt + 1;
    }

    return 0;
    
}