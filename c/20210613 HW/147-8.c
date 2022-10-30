#include <stdio.h>
int main(void){
    int row, column;
    printf("행의 수를 입력하세요.");
    scanf(" %d",&row);
    printf("열의 수를 입력하세요.");
    scanf(" %d",&column);
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 4; j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
    return 0;
}