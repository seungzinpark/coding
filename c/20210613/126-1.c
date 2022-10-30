#include <stdio.h>
int main(void){
    int input;
    int cnt=1;
    printf("정수를 입력하세요");
    scanf(" %d",&input);

    // while(cnt<=input){
    //     printf("%d",cnt);
    //     cnt++;
    // }
    for(int i=1; i <=input; i++){
        printf("%d",i);
    }
    return 0;
}