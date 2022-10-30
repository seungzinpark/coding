#include <stdio.h>
int main(void){
    int input;
    int cnt = 1;
    int sum = 0;

    printf("100이하의 정수를 입력하시오\n");
    scanf(" %d",&input);

    while(cnt <= input){
        // printf("num = %d ",cnt);
        sum = sum + cnt;
        cnt++;
    }
    printf("%d\n",sum);
    return 0;
}