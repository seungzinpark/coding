#include <stdio.h>
int main(void){
    char alpha='A';
    
while(alpha <= 'Z'){
    printf("%c",alpha);
    alpha = alpha + 1;
    // alpha++;
}

    return 0;
}