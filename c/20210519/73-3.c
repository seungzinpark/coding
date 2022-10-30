#include <stdio.h>
int main(void){
    int width;
    int length;
    int area;

    printf("가로의 길이를 입력하세요\n");
    scanf(" %d",&width);
    printf("세로의 길이를 입력하세요\n");
    scanf(" %d",&length);

    printf("width = %d\n",width+5);
    printf("length = %d\n",length*2);   
    printf("area = %d\n",width*length);

    return 0;
}