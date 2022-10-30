#include <stdio.h>
int main(void){
    int input;
    int cnt = 0;
    int sum = 0;
    double avg;

    while(1){
        // printf("정수를 입력하세요");
        scanf(" %d",&input);
        sum = sum + input;
        cnt++;
        if(input >= 100){
            break;
        }
    }
        avg = sum / cnt;
    printf("%d\n",sum);
    printf("%.1f",avg);

    return 0;
}