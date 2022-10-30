#include <stdio.h>
int main(void){
    int input;
    int sum;
    printf("정수를 입력해주세요");
    scanf(" %d",&input);

    for(int i=input;i<=100;i++){
        sum = sum+i;
    }
    printf("%d",sum);
    return 0;
}
