#include <stdio.h>
int main(void){
    int year;

    printf("연도를 입력해주세요");
    scanf(" %d",&year);

    if(year % 400 == 0){
        printf("leap year");
    }
    else if((year % 4 == 0) && (year % 100 != 0)){
        printf("leap year");
    }
    else{
        printf("common year");
    }

    return 0;
}