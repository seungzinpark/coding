#include <stdio.h>
int main(void){
    int input;
    int m3 = 0;
    int m5 = 0;
    for(int i=0;i<10;i++){
        printf("정수를 입력하세요");
        scanf(" %d",&input);
        if(input%3 == 0){
            m3++;
        }
        if(input%5 == 0){
            m5++;
        }
    }
    printf("%d\n",m3);
    printf("%d",m5);
    return 0;
}
