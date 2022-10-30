#include <stdio.h>
int main(void){
    int input1,input2,input3;

    printf("가장 큰 수를 출력해드립니당");
    scanf(" %d",&input1);
    scanf(" %d",&input2);
    scanf(" %d",&input3);

    if(input1 < input2){
        if(input2 < input3){
            printf("%d,%d,%d",input3,input2,input1);
        }
        else if(input2 > input3 && input3 > input1){
            printf("%d,%d,%d",input2,input3,input1);
        }    
        else if(input2 > input3 && input1 > input3){
            printf("%d,%d,%d",input2,input1,input3);
        }    
    }

    else if(input2 < input3){
        if(input3 < input1){
            printf("%d,%d,%d",input1,input3,input2);
        }
        else if(input3 > input1 && input1 > input2){
            printf("%d,%d,%d",input3,input1,input2);
        }    
        else if(input3 > input1 && input2 > input1){
            printf("%d,%d,%d",input3,input2,input1);
        }    
    }

   else if(input3 < input1){
        if(input1 < input2){
            printf("%d,%d,%d",input2,input1,input3);
        }
        else if(input1 > input2 && input2 > input3){
            printf("%d,%d,%d",input1,input2,input3);
        }    
        else if(input1 > input2 && input3 > input2){
            printf("%d,%d,%d",input1,input3,input2);
        }    
    } 

    return 0;
}