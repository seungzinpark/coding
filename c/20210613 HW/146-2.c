#include <stdio.h>
int main(void){
    int input1,input2;
    printf("두 개의 정수를 입력하세요\n");
    scanf(" %d",&input1);
    scanf(" %d",&input2);
    if(input1 < input2){
        for(int i = input1; i <= input2; i++){
            printf("%d ",i);
        }
    } else if(input2 < input1){
        for(int i = input2; i <= input1; i++){
            printf("%d ",i);
        }
    } else{
        printf("두 수가 같습니다. 다시 입력하세요");
    }
    return 0;
}