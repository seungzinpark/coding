#include <stdio.h>
int main(void){
    int input;
    int cnt = 0;
    int sum = 0;
    printf("자연수를 입력하세요");
    scanf(" %d",&input);

    for(int i = 1; ; i+=2){
            if(sum >= input){
                break;
            }
            cnt++;
            sum = sum + i;
            printf("cnt = %d, sum = %d\n",cnt,sum);
    }
    printf("%d %d",cnt,sum);
    return 0;
}
