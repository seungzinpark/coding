#include <stdio.h>
int main(void){

    for(int i = 2; i <= 6; i++){
        for(int j = i; j <= i+4; j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            printf("%d ",i+j);
        }
        printf("\n");
    }


    return 0;
}
