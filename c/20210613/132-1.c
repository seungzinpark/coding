#include <stdio.h>
int main(void){
    char alpha;

    printf("문자를 입력하세요");
    scanf(" %c",&alpha);

    for(int i=0;i<20;i++){
        printf("%c",alpha);
    }


    return 0;
}