#include <stdio.h>
int main(void){
    int arr[10];
    int i, j;
    int max;
    int min;

    for(i = 0; i < 10; i++){
        scanf(" %d",&arr[i]);
        if(arr[i] > 10000 || arr[i] < -10000){
            printf("잘못 입력하셨습니다. 다시 입력하세요.");
            scanf(" %d",&arr[i]);
        }
    }
    max = arr[0];
    min = arr[0];
    for(j = 1; j < 10; j++){
        if(arr[j]%2 == 0){
            if(max < arr[j]){
                max = arr[j];
            }
        }
        else{
            if(min > arr[j]){
                min = arr[j];
            }
        }
    }
    printf("min = %d\n",min);
    printf("max = %d\n",max);


    return 0;
}