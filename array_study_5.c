// 2차원 동적 할당 배열 생성하기 v2
// 직사각 배열 생성

#include <stdio.h>
#include <stdlib.h> // malloc 함수 사용을 위한 헤더 파일

int main()
{
    int array_size = 0;     // array_size 초기화
    int row_size = 2;       // row_size 고정

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
        for(int j = 0; j < row_size; j++)
        {
            array[i][j] = (10 * i) + j;
        }
    }

    // 배열 값 출력
    for(int i = 0; i < array_size; i++)
    {
        for(int j = 0; j < row_size; j++)
        {
            // printf("array[%d][%d] : %d  ", i, j, array[i][j]);
            printf("array[%d][%d] : %d  /  %d  /  %d,  ", i, j, array[i][j], &array[i][j], sizeof(array[i][j]));
            // 원소 위치 출력, 원소 값 출력, 원소 값 주소 출력, 원소 메모리 크기 출력
            
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