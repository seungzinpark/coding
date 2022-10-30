#include <stdio.h>
int main(void){
    int input;
    int sum = 0;
    int cnt = 0;
    printf("수를 입력하세요");
    scanf(" %d",&input);
    while(1){
        if(sum > input){
            break;
        }
        cnt++;
        sum = sum + cnt;
    }
    printf("%d %d",cnt,sum);

    return 0;
}
