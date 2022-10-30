#include <stdio.h>
int main(void){
    int a,b;
    printf("2부터 9까지의 정수a를 입력하세요\n");
    scanf(" %d",&a);
    printf("2부터 9까지의 정수b를 입력하세요\n");
    scanf(" %d",&b);
    for(int i = 1; i <= 9; i++){
        if(a > b){
            for(int j = 5; j >= 3; j--){
                printf("%d * %d = %d   ",j,i,j*i);
            }
        }
        else if(b > a){
            for(int k = 3; k <= 5; k++){
                printf("%d * %d = %d   ",k,i,k*i);
            }
        }
        printf("\n");
    }
    return 0;
}