// TSP(Travelling Salesman Problem)를 해결하기 위한 코드 작성
// Combinatorial Optimization
// 버젼 관리 : v001
// 작성한 코드 내용
// 1. 데이터 배열 생성 및 도시 데이터 입력 
// 작성일자 - 2021.12.28 ~

/////////////////////////////////////////////////////////////////////////////////

// 헤더파일 불러오기
#include <stdio.h> // 표준 입출력 함수 관련 라이브러리
#include <stdlib.h> // malloc 함수를 사용하기위한 라이브러리

int main()  // OS가 프로그램의 진입시점과 정상졸료를 판단하기 위한 코드, 정상종료시 정수 리턴값 출력(OS 인식)
{
    // 프로그램 시작
    printf("start 'Travelling Salesman Problem Solution'\n\n");

    // 도시 위치 데이터 생성

    int city_count = 0; // city_count 변수 정의 및 초기화
    int XY_coordinate = 2;  // 2nd 좌표 배열 크기 변수 정의(row_size)

    // city_count 변수 사용자 입력
    printf("Input 'city_count' data\n");
    printf("city_count : ");
    scanf("%d", &city_count);   // 입력받은 값을 city_count 변수 주소에 저장
    printf("\n");

    // 도시 위치 데이터 배열 생성
    
    // 배열 동적 할당

    // 도시의 수 데이터 배열 동적 할당(세로 배열)
    float **city_position_coordinate_data = (float**)malloc(sizeof(float*) * city_count);
    // 위치 좌표 데이터 동적 할당(가로 배열)
    for(int i = 0; i < city_count; i++)
    {
        city_position_coordinate_data[i] = (float*)malloc(sizeof(float) * city_count);
    }

    // 도시의 위치 좌표값 사용자 입력 및 동적 할당 배열에 입력값 저장

    printf("Input 'city_position_coordinate_data[X, Y]'\n");

    char city_name = 'A'; // 도시 이름 변수 정의, 초기 이름 char A 초기화

    float XY_data = 0;  // XY 좌표 데이터 변수 정의

    for(int i = 0; i < city_count; i++)
    {
        char coordinate_name = 'X'; // 좌표 이름 변수 정의, 초기 이름 char X 초기화

        for(int j = 0; j < XY_coordinate; j++)
        {
            // 사용자 입력시 나오는 안내문 출력
            printf("Input [%c] city position [%c] coordinate data : ", city_name, coordinate_name);

            // 입력한 값을 동적 할당한 배열의 주소에 저장
            scanf("%f", &XY_data);
            city_position_coordinate_data[i][j] = XY_data; // 입력받은 좌표값을 동적배열에 저장
            printf("%f", XY_data); // 입력된 데이터 출력
            printf("\n");

            coordinate_name++;  // 좌표 이름 변수값 변경(char = X -> Y)
        }

        city_name++; // 도시 이름 변수값 변경(char = A -> B)
    }
    printf("\n");

   

    // 입력받은 배열 데이터 출력
    printf("city_position_coordinate_data\n");

    city_name = 'A';   // 출력을 위한 도시 이름 변수값 초기화

    for(int i = 0; i < city_count; i++)
    {
        char coordinate_name = 'X'; // 출력을 위한 좌표 이름 변수값 초기화, for문 내부에서 재정의

        for(int j = 0; j < XY_coordinate; j++)
        {
            printf("%c_%c : %f  /  %d  /  %d,  ", city_name, coordinate_name, city_position_coordinate_data[i][j], &city_position_coordinate_data[i][j], sizeof(city_position_coordinate_data[i][j]));
            // 도시 이름, 좌표 이름, 원소 값 출력, 원소 값 주소 출력, 원소 메모리 크기 출력

            coordinate_name++;  // 좌표 이름 변수값 변경(char = X -> Y)
        }

        city_name++; // 도시 이름 변수값 변경(char = A -> B)
        printf("\n");
    }

    printf("\n");

    // 동적 배열 초기화
    for( int i = 0; i < XY_coordinate; i++)
    {
        free(city_position_coordinate_data[i]);
    }
    free(city_position_coordinate_data);

    printf("Initialization complete\n"); // 배열 초기화 완료 문구

    return 0;
}