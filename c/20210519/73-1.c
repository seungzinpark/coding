#include <stdio.h>
int main(void){
   int korean, english, math, computer;
   int sum;
   int avg;

   printf("과목의 점수를 입력받아서 총점과 평균을 구하는 프로그램\n");
    scanf(" %d",&korean);
    scanf(" %d",&english);
    scanf(" %d",&math);
    scanf(" %d",&computer);
   
    sum = korean + english + math + computer;
    avg = sum / 4;

    printf("sum %d\n",sum);
    printf("avg %d\n",avg);

    return 0;
}