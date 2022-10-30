#include <stdio.h>
int main(void){
    int num = 1;
    int sum = 0;
    
    while(num <= 10){
        sum = sum + num;
        num = num + 1;
    }

    printf("%d",sum);
    return 0;
}