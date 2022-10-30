#include <stdio.h>
int main(void){
    int input;
    int cnt_odd = 0;
    int cnt_even = 0;

    while(1){
        printf("정수를 입력하세요");
        scanf(" %d",&input);
        if(input == 0){
            break;
        }
        if(input%2 == 1){
            cnt_odd++;
        }
        else{
            cnt_even++;
        }
    }

    printf("odd : %d\n",cnt_odd);
    printf("even : %d\n",cnt_even);

    return 0;
    
}