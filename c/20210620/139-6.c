#include <stdio.h>
int main(void){
    int grade;
    int sum = 0;
    int cnt = 0;

    printf("5명의 성적을 입력하세요\n");
    for(int i = 0;i < 5;i++){
        scanf(" %d",&grade);
        sum = sum + grade;
        cnt++;

    }

    printf("총점 : %d\n",sum);
    printf("평균 : %d",sum/cnt);
    return 0;
}