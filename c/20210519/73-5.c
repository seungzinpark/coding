#include <stdio.h>
int main(void){
    float m_height;
    float m_weight;
    float g_height;
    float g_weight;

    printf("민수 키와 몸무게를 입력하시오\n");
    scanf(" %f",&m_height);
    scanf(" %f",&m_weight);
    printf("기영 키와 몸무게를 입력하시오\n");
    scanf(" %f",&g_height);
    scanf(" %f",&g_weight);

    if(m_height > g_height && m_weight > g_weight){
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}