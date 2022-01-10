// TSP(Travelling Salesman Problem)�� �ذ��ϱ� ���� �ڵ� �ۼ�
// Combinatorial Optimization
// ���� ���� : v001
// �ۼ��� �ڵ� ����
// 1. ������ �迭 ���� �� ���� ������ �Է� 
// �ۼ����� - 2021.12.28 ~

/////////////////////////////////////////////////////////////////////////////////

// ������� �ҷ�����
#include <stdio.h> // ǥ�� ����� �Լ� ���� ���̺귯��
#include <stdlib.h> // malloc �Լ��� ����ϱ����� ���̺귯��

int main()  // OS�� ���α׷��� ���Խ����� �������Ḧ �Ǵ��ϱ� ���� �ڵ�, ��������� ���� ���ϰ� ���(OS �ν�)
{
    // ���α׷� ����
    printf("start 'Travelling Salesman Problem Solution'\n\n");

    // ���� ��ġ ������ ����

    int city_count = 0; // city_count ���� ���� �� �ʱ�ȭ
    int XY_coordinate = 2;  // 2nd ��ǥ �迭 ũ�� ���� ����(row_size)

    // city_count ���� ����� �Է�
    printf("Input 'city_count' data\n");
    printf("city_count : ");
    scanf("%d", &city_count);   // �Է¹��� ���� city_count ���� �ּҿ� ����
    printf("\n");

    // ���� ��ġ ������ �迭 ����
    
    // �迭 ���� �Ҵ�

    // ������ �� ������ �迭 ���� �Ҵ�(���� �迭)
    float **city_position_coordinate_data = (float**)malloc(sizeof(float*) * city_count);
    // ��ġ ��ǥ ������ ���� �Ҵ�(���� �迭)
    for(int i = 0; i < city_count; i++)
    {
        city_position_coordinate_data[i] = (float*)malloc(sizeof(float) * city_count);
    }

    // ������ ��ġ ��ǥ�� ����� �Է� �� ���� �Ҵ� �迭�� �Է°� ����

    printf("Input 'city_position_coordinate_data[X, Y]'\n");

    char city_name = 'A'; // ���� �̸� ���� ����, �ʱ� �̸� char A �ʱ�ȭ

    float XY_data = 0;  // XY ��ǥ ������ ���� ����

    for(int i = 0; i < city_count; i++)
    {
        char coordinate_name = 'X'; // ��ǥ �̸� ���� ����, �ʱ� �̸� char X �ʱ�ȭ

        for(int j = 0; j < XY_coordinate; j++)
        {
            // ����� �Է½� ������ �ȳ��� ���
            printf("Input [%c] city position [%c] coordinate data : ", city_name, coordinate_name);

            // �Է��� ���� ���� �Ҵ��� �迭�� �ּҿ� ����
            scanf("%f", &XY_data);
            city_position_coordinate_data[i][j] = XY_data; // �Է¹��� ��ǥ���� �����迭�� ����
            printf("%f", XY_data); // �Էµ� ������ ���
            printf("\n");

            coordinate_name++;  // ��ǥ �̸� ������ ����(char = X -> Y)
        }

        city_name++; // ���� �̸� ������ ����(char = A -> B)
    }
    printf("\n");

   

    // �Է¹��� �迭 ������ ���
    printf("city_position_coordinate_data\n");

    city_name = 'A';   // ����� ���� ���� �̸� ������ �ʱ�ȭ

    for(int i = 0; i < city_count; i++)
    {
        char coordinate_name = 'X'; // ����� ���� ��ǥ �̸� ������ �ʱ�ȭ, for�� ���ο��� ������

        for(int j = 0; j < XY_coordinate; j++)
        {
            printf("%c_%c : %f  /  %d  /  %d,  ", city_name, coordinate_name, city_position_coordinate_data[i][j], &city_position_coordinate_data[i][j], sizeof(city_position_coordinate_data[i][j]));
            // ���� �̸�, ��ǥ �̸�, ���� �� ���, ���� �� �ּ� ���, ���� �޸� ũ�� ���

            coordinate_name++;  // ��ǥ �̸� ������ ����(char = X -> Y)
        }

        city_name++; // ���� �̸� ������ ����(char = A -> B)
        printf("\n");
    }

    printf("\n");

    // ���� �迭 �ʱ�ȭ
    for( int i = 0; i < XY_coordinate; i++)
    {
        free(city_position_coordinate_data[i]);
    }
    free(city_position_coordinate_data);

    printf("Initialization complete\n"); // �迭 �ʱ�ȭ �Ϸ� ����

    return 0;
}