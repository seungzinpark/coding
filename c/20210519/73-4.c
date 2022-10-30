#include <stdio.h>
int main(void){
    int input1,input2;

    printf("첫번째 수를 입력하세요\n");
    scanf(" %d",&input1);
    printf("두번째 수를 입력하세요\n");
    scanf(" %d",&input2);

    // ++input1;
    // input2--;

    printf("%d %d",++input1, input2--);
    printf("%d %d",input1, input2);

    return 0;
}