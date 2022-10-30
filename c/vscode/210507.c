#include <stdio.h>

int main(void){
    int input1, input2, input3;
    int min;
    scanf(" %d", &input1);
    scanf(" %d", &input2);
    scanf(" %d", &input3);
  
    min = input1 < input2 ? input1 : input2;
    min = min < input3 ? min : input3;

    printf("%d",min);

    return 0;

}