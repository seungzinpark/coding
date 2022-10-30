#include <stdio.h>
int main(void){
    int input;
    int sum = 0;
    printf("정수를 입력하세요");
    scanf(" %d",&input);
    for(int i = 1; i <= input; i++){
        if(i%5 == 0){
            sum = sum + i;
        }
    }
    printf("%d",sum);
    return 0;
}