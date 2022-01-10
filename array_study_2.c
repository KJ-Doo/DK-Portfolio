// 동적할당 : 포인터를 이용하여 원하는 만큼 메모리를 할당하는 법
// 배얼의 크기를 프로그램이 run하는 동한 정할 수 있다.(가변적)
// malloc함수 : 메모리를 할당해주는 함수
// 메모리를 얼마만큼 할당해줄지를 인자로 넘겨주면 메모리를 항당함

#include <stdio.h>
#include <stdlib.h> // malloc함수(memory Allocation) 헤더 파일

int main()
{
    int element_count;  // 배열 원소의 개수 변수 정의
    int *array;         // 배열 변수 주소 포인터번수 정의

    scanf("%d", &element_count);    // element_count 값 읽어들임

    // malloc함수 문법
    // malloc을 통해 동적할당 완료 후 포인터함수를 통해 시작주소 할당
    // malloc(할당하고싶은 메모리 크기 = 자료형 크기 x 원소의 개수)
    // 포인터 자료형 array = (포인터 자료형)malloc(자료형 크기*원소의 개수)
    int *array = (int*)malloc(sizeof(int) * element_count);
    // 동적할당 해제, free 함수 사용
    free(array);
}