// �����Ҵ� : �����͸� �̿��Ͽ� ���ϴ� ��ŭ �޸𸮸� �Ҵ��ϴ� ��
// ����� ũ�⸦ ���α׷��� run�ϴ� ���� ���� �� �ִ�.(������)
// malloc�Լ� : �޸𸮸� �Ҵ����ִ� �Լ�
// �޸𸮸� �󸶸�ŭ �Ҵ��������� ���ڷ� �Ѱ��ָ� �޸𸮸� �״���

#include <stdio.h>
#include <stdlib.h> // malloc�Լ�(memory Allocation) ��� ����

int main()
{
    int element_count;  // �迭 ������ ���� ���� ����
    int *array;         // �迭 ���� �ּ� �����͹��� ����

    scanf("%d", &element_count);    // element_count �� �о����

    // malloc�Լ� ����
    // malloc�� ���� �����Ҵ� �Ϸ� �� �������Լ��� ���� �����ּ� �Ҵ�
    // malloc(�Ҵ��ϰ���� �޸� ũ�� = �ڷ��� ũ�� x ������ ����)
    // ������ �ڷ��� array = (������ �ڷ���)malloc(�ڷ��� ũ��*������ ����)
    int *array = (int*)malloc(sizeof(int) * element_count);
    // �����Ҵ� ����, free �Լ� ���
    free(array);
}