// 1st ���� �迭(array) ���� �� �Է��ϰ� ����ϱ�
// 1st ���� �迭���� ��� �����ϱ�
// ver 001
// �ۼ� ���� : 22.01.10
//////////////////////////////////////////////////////////////////////////////////////////

// ������� �ҷ�����
#include <stdio.h> // ǥ�� ����� �Լ� ���� ���̺귯��
#include <stdlib.h> // malloc �Լ��� ����ϱ����� ���̺귯��

int main()
{
    // ���α׷� ����
    printf("start create 1st_array\n\n");

    int array_size = 0; // �迭 ������ �Է� ���� ����

    // �ٿ� ������ ������ �Է� �� ����
    printf("array_size : ");
    scanf("%d", &array_size);
    printf("\n");

    // 1st ���� �迭 �Ҵ�(��Ұ� : float)
    // 1st �迭�� X, Y ��Ҹ� ��� ���� malloc ����� 2��� ��
    float *array_data_1st = (float*)malloc(sizeof(float) * 2 * array_size);

    // �迭 ��� �Է�
    for(int i = 0; i < (2 * array_size); i++)
    {
        printf("Input array_data_1st[%d] : ", i);
        scanf("%f", &array_data_1st[i]);
    }
    printf("\n");

    // ���� �Ҵ� �迭 �޸� �ּ� ���
    printf("array[0] memory_address = %d\n", &array_data_1st[0]);
    printf("\n");

    // �迭 ��� ���(�迭 ��ü ���)
    printf("Output 1st_Array_data\n");
    for(int i = 0; i < (2 * array_size); i++)
    {
        printf("array[%d] = %f  /  %d  /  %d\n", i, array_data_1st[i], &array_data_1st[i], sizeof(array_data_1st[1]));
    }
    printf("\n");

    // ���� �迭 �ʱ�ȭ
    free(array_data_1st);
    printf("Initialization complete"); // �迭 �ʱ�ȭ �Ϸ� ����

    return 0;
}