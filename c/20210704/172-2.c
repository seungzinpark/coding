#include <stdio.h>
int main(void){
    char arr[26];
    for(int i = 0; i < 26; i++){
        arr[i] = 'A' + i;
        printf("%c ",arr[25-i]);
    }
    return 0;
}