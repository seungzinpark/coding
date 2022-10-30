#include <stdio.h>
int main(void){
    int input;
    while(1){
        printf("안내판\n");
        printf("작업할 번호를 선택하세요");
        scanf(" %d",&input);

        switch (input){
          case 1:
                printf("입력하기를 선택하였습니다.");
                break;
            case 2:
                printf("출력하기를 선택하였습니다.");
                break;
            case 3:
                printf("삭제하기를 선택하였습니다.");
                break;
            case 4:
                printf("끝내기를 선택하였습니다.");
                break;
            default:
                break;
        }
        if(input == 4){
            break;
        }
    }

    return 0;
}