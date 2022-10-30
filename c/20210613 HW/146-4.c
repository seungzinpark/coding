#include <stdio.h>
int main(void){
    int number;
    int input;
    int sum = 0;
    float avg;
    printf("정수를 입력하세요\n");
    scanf(" %d",&number);
    for(int i = 1; i <= number; i++){
        printf("%d번째 정수를 입력해주세요.",i);
        scanf(" %d",&input);
        sum = sum + input;
    }
    avg = sum / number;
    printf("%.2f",avg);
    return 0;
}