// 2���� ���� �Ҵ� �迭 �����ϱ� v2
// ���簢 �迭 ����

#include <stdio.h>
#include <stdlib.h> // malloc �Լ� ����� ���� ��� ����

int main()
{
    int array_size = 0;     // array_size �ʱ�ȭ
    int row_size = 2;       // row_size ����

    printf("input array size : ");

    scanf("%d", &array_size);   // array_size �Է�

    // �迭�� ���� ���� �Ҵ�
    int **array = (int**)malloc(sizeof(int*) * array_size);

    // �迭�� ���� ���� �Ҵ�
    for(int i = 0; i < array_size; i++)
    {
        array[i] = (int*)malloc(sizeof(int) * array_size);
    }

    // �迭 ���� �� ����
    for(int i = 0; i < array_size; i++)
    {
        for(int j = 0; j < row_size; j++)
        {
            array[i][j] = (10 * i) + j;
        }
    }

    // �迭 �� ���
    for(int i = 0; i < array_size; i++)
    {
        for(int j = 0; j < row_size; j++)
        {
            // printf("array[%d][%d] : %d  ", i, j, array[i][j]);
            printf("array[%d][%d] : %d  /  %d  /  %d,  ", i, j, array[i][j], &array[i][j], sizeof(array[i][j]));
            // ���� ��ġ ���, ���� �� ���, ���� �� �ּ� ���, ���� �޸� ũ�� ���
            
        }

        printf("\n");
    }

    // �޸� �ʱ�ȭ(���� �Ҵ� ����)
    for( int i = 0; i < array_size; i++)
    {
        free(array[i]);
    }
    free(array);

    return 0;
}