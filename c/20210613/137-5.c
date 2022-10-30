#include <stdio.h>
int main(void){
    // int cnt=0;
    int input;
    int even=0;
    for(int i=0;i<10;i++){
        printf("정수를 입력하세요");
        scanf(" %d",&input);
        if(input%2 == 0){
            even++;
        }
    }
    printf("%d",even);

    // while(cnt<10){
    //     printf("정수를 입력하세요");
    //     scanf(" %d",&input);
    //     cnt++;
    //     if(input%2 == 0){
    //         even++;
    //     }
    //     printf("cnt : %d ", cnt);
    //     printf("even : %d\n", even);
    // }
    // printf("%d",even);
    return 0;
}
