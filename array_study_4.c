// 2차원 동적 할당 배열 생성하기

#include <stdio.h>
#include <stdlib.h> // malloc 함수 사용을 위한 헤더 파일

int main()
{
    int array_size;

    printf("input array size : ");

    scanf("%d", &array_size);   // array_size 입력

    // 배열의 세로 동적 할당
    int **array = (int**)malloc(sizeof(int*) * array_size);

    // 배열의 가로 동적 할당
    for(int i = 0; i < array_size; i++)
    {
        array[i] = (int*)malloc(sizeof(int) * array_size);
    }

    // 배열 원소 값 생성
    for(int i = 0; i < array_size; i++)
    {
        for(int j = 0; j < array_size; j++)
        {
            array[i][j] = (10 * i) + j;
        }
    }

    // 배열 값 출력
    for(int i = 0; i < array_size; i++)
    {
        for(int j = 0; j < array_size; j++)
        {
            printf("array[%d][%d] : %d  /  %d  /  %d,  ", i, j, array[i][j], &array[i][j], sizeof(array[i][j]));
        }

        printf("\n");
    }

    // 메모리 초기화(동적 할당 헤제)
    for( int i = 0; i < array_size; i++)
    {
        free(array[i]);
    }
    free(array);

    return 0;
}