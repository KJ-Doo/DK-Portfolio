// TSP(Travelling Salesman Problem)�� �ذ��ϱ� ���� �ڵ� �ۼ�
// Combinatorial Optimization
// ���� ���� : v003
// �ۼ��� �ڵ� ����
// 1. ������ �迭 ���� �� ���� ������ �Է�
// 2. �Է� ������ ���� ��� �κ� ����
// 3. �迭 �����͸� ���� �о�帮�� ���� 1st �迭 ���·� ��ǥ ������ �迭 �� ����
// �ۼ����� - 2021.12.28 ~ 21.12.29

/////////////////////////////////////////////////////////////////////////////////

// ������� �ҷ�����
#include <stdio.h> // ǥ�� ����� �Լ� ���� ���̺귯��
#include <stdlib.h> // malloc �Լ��� ����ϱ����� ���̺귯��

int main() // OS�� ���α׷��� ���Խ����� �������Ḧ �Ǵ��ϱ� ���� �ڵ�, ��������� ���� ���ϰ� ���(OS �ν�)
{
    // ���α׷� ����
    printf("start 'Travelling Salesman Problem Solution'\n\n");

    // ���� ��ġ ������ ����

    // city_count ������ ����� �Է�
    int city_count = 0; // city_count ���� ���� �� �ʱ�ȭ

    // city_count ������ ����� �Է� �ȳ����� ���
    printf("Input 'city_count' data\n");
    printf("city_count : ");
    scanf("%d",&city_count); // �Է¹��� ���� city_count ���� �ּҿ� ����
    printf("\n");

    // ���� ��ġ ������ ���� �迭 ����(1st �迭)

    // 1st �迭 ���� �Ҵ�
    // �� ������ ��ġ ��ǥ ������(X, Y)�� ������� �����Ͽ� 1st �迭�� ����
    float *city_position_coordinate_data = (float*)malloc(sizeof(float) * city_count);

    // ������ ��ġ ��ǥ ������ ����� �Է� �� ���� �Ҵ� �迭�� �Է°� ����

    // city_position_coordinate_data ���Ұ� ����� �Է� �ȳ����� ���
    printf("Input 'city_position_coordinate_data[X, Y]'\n");

    char city_name = 'A'; // ���� �̸� ���� ����, �ʱ� �̸� char A �ʱ�ȭ
    char coordinate_name = 'X'; // ��ǥ �̸� ���� ����, �ʱ� �̸� char X �ʱ�ȭ

    for(int i = 0; i < city_count; i++)
    {
        
        printf("Input [%c] city position [%c] coordinate data : ", city_name, coordinate_name);

        // �Է��� ���� ���� �Ҵ��� �迭�� �ּҿ� ����
        scanf("%f", &city_position_coordinate_data[i]);

        if(coordinate_name =='X')
        {
            coordinate_name++;  // ��ǥ �̸� ������ ����(char = X -> Y)
        }
        else
        {
            --coordinate_name;  // ��ǥ �̸� ������ ����(char = Y -> X)
        }

        city_name++; // ���� �̸� ������ ����(char = A -> B)

        printf("\n");
    }

    // �Է¹��� �迭 ������ ���
    for(int i = 0; i < city_count; i++)
    {
        printf("array[%d] = %d  /  %d  /  %d\n", i, city_position_coordinate_data[i], &city_position_coordinate_data[i], sizeof(city_position_coordinate_data[i]));
    }

    // ���� �迭 �ʱ�ȭ
    free(city_position_coordinate_data);

    printf("Initialization complete\n"); // �迭 �ʱ�ȭ �Ϸ� ����

    return 0;

}  