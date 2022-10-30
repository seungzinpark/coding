#include <stdio.h>
int main(void){
    int num = 1;
    int sum = 0;

    while(num <= 10){
        printf("num = %d ",num);
    // num = num + 1
    sum = sum + num;
    num++;
        printf("sum = %d\n",sum);
    }



    return 0;
}