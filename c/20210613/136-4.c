#include <stdio.h>
int main(void){
    int input;
    int sum=0;
    while(1){
        printf("자연수를 입력해주세요");
        scanf(" %d",&input);
        if(input>0){
            break;
        } else {
            printf("잘못입력했습니다.");
        }
    }
    for(int i=1;i<=input;i++){
        sum=sum+i;
    }
    printf("%d", sum);
    return 0;
}
