// math.h ���
// ������ ��� ���� �Լ� ����� ���� math.h ������� ���
// ������ �Լ�
// 1. sprt() - 1/2 ���� �Լ�
// 2. pow() - ���� �� �������� ������ �Լ� / pow(��� ���, ������ �Ķ����), ex pow(4, 0.5) = 2

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


