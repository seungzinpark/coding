#include <stdio.h>
int main(void){
    int input;
    int cnt = 0;
    int sum = 0;
    int avg;


    while(1){
        // printf(정수를 입력하세요.);
        scanf(" %d",&input);

        if(input == 0){
            break;
        }

        if(input % 2 == 1){
        sum = sum + input;
        cnt++;
        }
    }
    avg = sum / cnt;
    printf("홀수의 합 = %d\n",sum);
    printf("홀수의 평균 = %d",avg);
    return 0;
}