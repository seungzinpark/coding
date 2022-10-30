#include <stdio.h>
int main(void){
   int input1, input2;
   int share;
   int remainder;

   printf("몫과 나머지를 출력하는 프로그램\n");
   scanf(" %d",&input1);
   scanf(" %d",&input2);

    if(input1 < input2){
        share = input2 / input1;
        remainder = input2 % input1;
        printf("%d / %d = %d...%d",input2, input1, share, remainder);
    }
    else{
        share = input1 / input2;
        remainder = input1 % input2;
        printf("%d / %d = %d...%d",input1, input2, share, remainder);   
    }

    return 0;
}