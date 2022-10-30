#include <stdio.h>
int main(void){
    int input;
    int sum = 0;
    int cnt = 0;
    int avg;


    while(1){
        printf("점수를 입력하세요");
        scanf(" %d",&input);
        if(input < 0 || input > 100){
            break;
        }
        sum = sum + input;
        cnt = cnt + 1
    }
    avg = sum/cnt;
    printf(" sum : %d",sum);
    printf(" avg : %.1f",avg);
    return 0;
}