#include <stdio.h>
int main(void){
    int input;
    int sum=0;
    int cnt=0;
    float avg;


    while(1){
    printf("정수를 입력하세요");
    scanf(" %d",&input);

    if(input == 0){
        break;
    }
    sum = sum + input;
    cnt = cnt + 1;
    }
    avg = sum/cnt;
    printf("입력된 자료의 개수 = %d\n",cnt);
    printf("입력된 자료의 합계 = %d\n",sum);
    printf("입력된 자료의 평균 = %.2f",avg);    

    return 0;
}