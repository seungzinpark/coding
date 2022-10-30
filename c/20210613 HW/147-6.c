#include <stdio.h>
int main(void){
    int input1, input2;
    int cnt = 0;
    int sum = 0;
    float avg;
    printf("두 수를 입력하세요.\n");
    scanf(" %d",&input1);
    scanf(" %d",&input2);
    if(input1 < input2){
        for(int i = input1; i <= input2; i++){
            if(i%3 == 0 || i%5 == 0){
                sum = sum + i;
                cnt++;
            }
        }
    }
    else if(input2 < input1){
        for(int i = input2; i <= input1; i++){
            if(i%3 == 0 || i%5 == 0){
                sum = sum + i;
                cnt++;
            }
        }
    }
    else{
        printf("두 수가 같습니다. 다시 입력해주세요;");
    }
    avg = sum / cnt;
    printf("sum : %d\n",sum);
    printf("avg : %.2f",avg);
    return 0;
}