#include <stdio.h>
int main(void){
    int base,height;
    float width;
    char answer;
    while(1){
        printf("Base = ");
        scanf(" %d",&base);
        printf("Height =");
        scanf(" %d",&height);
        width = (base*height)/2;
        printf("Triangle width = %.1f\n",width);
        printf("Continue?");
        scanf(" %c",&answer);
        if(answer != 'y' || answer != 'Y' ){
            break;
        }
    }


    return 0;
}