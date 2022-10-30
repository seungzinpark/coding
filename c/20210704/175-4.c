#include <stdio.h>
int main(void){
    int arr[100];
    int become_zero;

    for(int i = 0; i < 100; i++){
        printf("정수를 입력하세요\n");
        scanf(" %d",&arr[i]);
        if(arr[i] == 0){
            become_zero = i;
            break;
        }
    }
    for(int j = 0; j < become_zero; j++){
        if(j%2 == 1){
            printf("%d ",arr[j]);
        }
    }

    return 0;
}