// switch_case 문

// 헤더파일 불러오기
#include <stdio.h>

int main()
{
    int input_data; // switch 문 입력, 판단 뱐수 정의

    printf("Input data : "); // input_data 입력 안내문 출력
    scanf("%d", &input_data); // 입력받은 값을 input_data 변수 주소에 저장

    // switch 문 시작
    switch (input_data)
    {
    case 1:
        printf("your number 1");
        break;

    case 2:
        printf("your number 2");
        break;

    case 3:
        printf("your number 3");
        break;
    
    default:
        printf("your nothing");
    }

    return 0;
}

