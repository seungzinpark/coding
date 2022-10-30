#include <stdio.h>
int main(void){
    float arr[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int input1, input2;
    float sum;

    printf("반1을 입력하세요.");
    scanf(" %d",&input1);
    printf("반2을 입력하세요.");
    scanf(" %d",&input2);
    sum = arr[input1 - 1] + arr[input2 - 1];
    printf("%.1f",sum);

    return 0;
}