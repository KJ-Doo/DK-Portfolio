// 배열(array) : 같은 자료형의 변수를 할당된 메모리공간 안에서 연속적으로
//              이어서 관리하는 자료구조
// 특징
// 1. 배열은 연속된 메모리 공간을 할당받는다.
// 2. 배열의 크기는 고정적이다.
// 3. 배열의 이름은 배열의 시작 주소이다.
// 4. 배열은 인덱스(index)를 이용할 수 있다.
// 5. 자료를 끼워넣거나 삭제하는 것이 메모리상 큰 작업이다.(Big-O)
// 6. 인덱스를 통해 원소접근이 빨라 이분 탐색이 용이하다.

// 활용
// 1. 자료의 크기가 한정적일 때
// 2. 삽입의 삭제가 적을 때
// 3. 탐색이 빈번할 때

#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    // int형 변수 5개를 연속되게 저장할 수 있는 공간 할당
    // 해당 배열의 시작주소는 배열의 이름(arr)에 저장
    printf("arr = %d\n", arr);  // arr 배열 이름(시작주소) 츨력
    printf("arr[0], &arr[0] = %d , %d\n", arr[0], &arr[0]);
    // arr 배열 시작 변수값, 시작 주소 출력
    printf("arr[1], &arr[1] = %d , %d\n", arr[1], &arr[1]);
    printf("arr[2], &arr[2] = %d , %d\n", arr[2], &arr[2]);
    printf("arr[3], &arr[3] = %d , %d\n", arr[3], &arr[3]);
    printf("arr[4], &arr[4] = %d , %d\n", arr[4], &arr[4]);
    // arr 배열 나머지 변수값, 주소 출력 / 메모리가 연속적으로 할당
    // int 변수의 메모리 크기(4)
    printf("arr memory size = %d\n", sizeof(arr));
    // sizeof 함수 : 변수에 할당된 메모리의 크기 출력(크기 고정)
    // arr배열의 경우 int(4) X 5개 = 20
    // index : 배열의 시작 주소와 원소(element)의 크기(=자료형 크기)
    // 만 안다면 몇 번째 원소가 어디 있는지 알 수 있다.

    return 0;
}
