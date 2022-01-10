// TSP(Travelling Salesman Problem)를 해결하기 위한 코드 작성
// Combinatorial Optimization
// 버젼 관리 : v003
// 작성한 코드 내용
// 1. 데이터 배열 생성 및 도시 데이터 입력
// 2. 입력 데이터 저장 방법 부분 수정
// 3. 배열 데이터를 쉽게 읽어드리기 위해 1st 배열 형태로 좌표 데이터 배열 형 변경
// 작성일자 - 2021.12.28 ~ 21.12.29

/////////////////////////////////////////////////////////////////////////////////

// 헤더파일 불러오기
#include <stdio.h> // 표준 입출력 함수 관련 라이브러리
#include <stdlib.h> // malloc 함수를 사용하기위한 라이브러리

int main() // OS가 프로그램의 진입시점과 정상졸료를 판단하기 위한 코드, 정상종료시 정수 리턴값 출력(OS 인식)
{
    // 프로그램 시작
    printf("start 'Travelling Salesman Problem Solution'\n\n");

    // 도시 위치 데이터 생성

    // city_count 변수값 사용자 입력
    int city_count = 0; // city_count 변수 정의 및 초기화

    // city_count 변수값 사용자 입력 안내문구 출력
    printf("Input 'city_count' data\n");
    printf("city_count : ");
    scanf("%d",&city_count); // 입력받은 값을 city_count 변수 주소에 저장
    printf("\n");

    // 도시 위치 데이터 동적 배열 생성(1st 배열)

    // 1st 배열 동적 할당
    // 각 도시의 위치 좌표 데이터(X, Y)를 순서대로 나열하여 1st 배열에 저장
    float *city_position_coordinate_data = (float*)malloc(sizeof(float) * city_count);

    // 도시의 위치 좌표 데이터 사용자 입력 및 동적 할당 배열에 입력값 저장

    // city_position_coordinate_data 원소값 사용자 입력 안내문구 출력
    printf("Input 'city_position_coordinate_data[X, Y]'\n");

    char city_name = 'A'; // 도시 이름 변수 정의, 초기 이름 char A 초기화
    char coordinate_name = 'X'; // 좌표 이름 변수 정의, 초기 이름 char X 초기화

    for(int i = 0; i < city_count; i++)
    {
        
        printf("Input [%c] city position [%c] coordinate data : ", city_name, coordinate_name);

        // 입력한 값을 동적 할당한 배열의 주소에 저장
        scanf("%f", &city_position_coordinate_data[i]);

        if(coordinate_name =='X')
        {
            coordinate_name++;  // 좌표 이름 변수값 변경(char = X -> Y)
        }
        else
        {
            --coordinate_name;  // 좌표 이름 변수값 변경(char = Y -> X)
        }

        city_name++; // 도시 이름 변수값 변경(char = A -> B)

        printf("\n");
    }

    // 입력받은 배열 데이터 출력
    for(int i = 0; i < city_count; i++)
    {
        printf("array[%d] = %d  /  %d  /  %d\n", i, city_position_coordinate_data[i], &city_position_coordinate_data[i], sizeof(city_position_coordinate_data[i]));
    }

    // 동적 배열 초기화
    free(city_position_coordinate_data);

    printf("Initialization complete\n"); // 배열 초기화 완료 문구

    return 0;

}  