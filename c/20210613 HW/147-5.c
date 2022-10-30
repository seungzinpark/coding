#include <stdio.h>
int main(void){
    int input;
    int even;
    int odd;
    printf("정수를 입력하세요\n");
    for(int i = 1; i <= 10; i++){
        scanf(" %d",&input);
        if(input%2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    printf("even : %d\n",even);
    printf("odd : %d\n",odd);
    return 0;
}