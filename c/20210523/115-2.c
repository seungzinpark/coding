#include <stdio.h>
int main(void){
    int input;
    int num;
    int sum;

    printf("100이하의 정수를 입력하세요.");
    scanf(" %d",&input);

    while(num <= input){
        sum = sum + num;
        num++;

    }

    printf("%d",sum);
    return 0;
}