#include <stdio.h>
int main(void){
    int arr[10];
    int max;

    for(int i = 0; i < 10; i++){
        scanf(" %d",&arr[i]);
    }
    max = arr[0];
    for(int j = 1; j < 10; j++){
        if(max < arr[j]){
            max = arr[j];
        }
    }
    printf("max = %d",max);
    return 0;
}