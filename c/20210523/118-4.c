#include <stdio.h>
int main(void){
    int input;
    int cnt = 0;
    int sum = 0;
    double avg;
    printf("정수를 입력하세요.");

    while(1){
        scanf(" %d",&input);
        if(input == 0){
            break;
        }
        sum = sum + input;
        cnt = cnt + 1;
    }
    avg = sum / cnt;
    printf("입력된 자료의 개수 = %d\n",cnt);
    printf("입력된 자료의 합계 = %d\n",sum);
    printf("입력된 자료의 평균 = %.2f",avg);

    return 0;
}