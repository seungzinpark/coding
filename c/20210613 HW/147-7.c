#include <stdio.h>
int main(void){
    int input;
    printf("한 개의 자연수를 입력하세요\n");
    scanf(" %d",&input);
    for(int i = 1; i <= 10; i++){
        printf("%d ",i*input);
    }
    return 0;
}