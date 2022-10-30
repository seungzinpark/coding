#include <stdio.h>
int main(void){
    int input1, input2;
    int result;

    printf("두 수를 입력해주세요");
    scanf(" %d",&input1);
    scanf(" %d",&input2);

    if(input1 > input2){
        result = input1 - input2;
    }
    else{
        result = input2 - input1;
    }

    // result = (input1 > input2)? input1-input2 : input2-input1;

    printf("%d",result);
    return 0;
}