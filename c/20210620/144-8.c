#include <stdio.h>
int main(void){
    for(int i = 1; i <= 9; i++){
        for(int j = 2; j <= 4; j++){
            printf("%d * %d = %d ",j,i,j*i);
        }
    printf("\n");
    }
    return 0;
}
