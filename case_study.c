// switch_case ��

// ������� �ҷ�����
#include <stdio.h>

int main()
{
    int input_data; // switch �� �Է�, �Ǵ� ���� ����

    printf("Input data : "); // input_data �Է� �ȳ��� ���
    scanf("%d", &input_data); // �Է¹��� ���� input_data ���� �ּҿ� ����

    // switch �� ����
    switch (input_data)
    {
    case 1:
        printf("your number 1");
        break;

    case 2:
        printf("your number 2");
        break;

    case 3:
        printf("your number 3");
        break;
    
    default:
        printf("your nothing");
    }

    return 0;
}

