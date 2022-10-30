#include <stdio.h>
int main(void){
    int input;
    printf("수를 입력하세요");
    scanf(" %d",&input);
    for(int i=1;i<=input;i+=2){
        printf("%d ",i+1);
    }
    return 0;
}
