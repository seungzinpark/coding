#include <stdio.h>
#include <string.h>

int main(void){
    char name[10];
    
    printf("이름이 모야?");
    scanf(" %s",&name);

    if(strcmp(name,"승진") == 0){
        printf("%s아 잘 자~",name);
    }
    else{
        printf("누구세요???");
    }


    return 0;
}
