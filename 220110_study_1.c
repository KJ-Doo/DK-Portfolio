// 1st 동적 배열(array) 생성 후 입력하고 출력하기
// 1st 동적 배열에서 요소 추출하기
// ver 001
// 작성 일자 : 22.01.10
//////////////////////////////////////////////////////////////////////////////////////////

// 헤더파일 불러오기
#include <stdio.h> // 표준 입출력 함수 관련 라이브러리
#include <stdlib.h> // malloc 함수를 사용하기위한 라이브러리

int main()
{
    // 프로그램 시작
    printf("start create 1st_array\n\n");

    int array_size = 0; // 배열 사이즈 입력 변수 정의

    // 바열 사이즈 변수값 입력 및 정의
    printf("array_size : ");
    scanf("%d", &array_size);
    printf("\n");

    // 1st 동적 배열 할당(요소값 : float)
    // 1st 배열에 X, Y 요소를 담기 위해 malloc 사이즈를 2배로 함
    float *array_data_1st = (float*)malloc(sizeof(float) * 2 * array_size);

    // 배열 요소 입력
    for(int i = 0; i < (2 * array_size); i++)
    {
        printf("Input array_data_1st[%d] : ", i);
        scanf("%f", &array_data_1st[i]);
    }
    printf("\n");

    // 동적 할당 배열 메모리 주소 출력
    printf("array[0] memory_address = %d\n", &array_data_1st[0]);
    printf("\n");

    // 배열 요소 출력(배열 전체 출력)
    printf("Output 1st_Array_data\n");
    for(int i = 0; i < (2 * array_size); i++)
    {
        printf("array[%d] = %f  /  %d  /  %d\n", i, array_data_1st[i], &array_data_1st[i], sizeof(array_data_1st[1]));
    }
    printf("\n");

    // 동적 배열 초기화
    free(array_data_1st);
    printf("Initialization complete"); // 배열 초기화 완료 문구

    return 0;
}