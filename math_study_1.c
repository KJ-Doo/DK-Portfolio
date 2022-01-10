// math.h 사용
// 수학적 계산 관련 함수 사용을 위해 math.h 헤더파일 사용
// 제곱근 함수
// 1. sprt() - 1/2 제곱 함수
// 2. pow() - 조금 더 범용적인 제곱근 함수 / pow(계산 대상, 제곱근 파라미터), ex pow(4, 0.5) = 2

#include <stdio.h>
#include <math.h>

int main()
{
    float A_x = 1.0;
    float A_y = 1.0;
    float B_x = 2.0;
    float B_y = 3.0;
    float C_data = 0;

    C_data = sqrt(pow(B_x - A_x, 2) + pow(B_y - A_y, 2));

    printf("%f", C_data);

    return 0;
}


