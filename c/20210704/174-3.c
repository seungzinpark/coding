#include <stdio.h>
int main(void){
    int arr[10];
    for(int i = 0; i < 10; i++){
        printf("정수를 입력하세요\n");
        scanf(" %d",&arr[i]);
    }
        printf("%d ,%d, %d", arr[2], arr[4], arr[9]);

    return 0;
}