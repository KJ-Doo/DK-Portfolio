// make city_position_coordinate_data_code
// ver. 0.0.1 - 211203

#include <stdio.h>

int main()
{
    // definition data

    //// data name : city_count
    //// data type : int
    int city_count = 0;

    // input guide - data city_count

    printf("input city count in problem\n");
    printf("input city count : ", city_count);
    scanf("%d", &city_count);

    // definition data

    //// data name : city_position_coordinate_data
    //// data type : 2nd array float
    //// data structure : [city_count][city_position_coordinate[X, Y]]
    float City_position_coordinate_data[4][2];

    // definition data

    //// data name : city_name
    //// data type : char
    char city_name = 'A';

    // input guide - city_position_coordinate_data

    printf("input city position coordinate data[X, Y]\n");

    //// i = city, j = coordinate
    for(int i=0; i<city_count; i++)
    {
        // definition data

        //// data name : coordinate_name
        //// data type : char
        char coordinate_name = 'X';

        for(int j=0; j<2; j++)
        {
            printf("[%c] city position [%c] coordinate data input : ", city_name, coordinate_name);
            scanf("%f", &City_position_coordinate_data[i][j]);

            coordinate_name++;
        }

        city_name++;
    }

    // output guide - city_position_coordinate_data in terminal

    for(int i=0; i<city_count; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%f ", City_position_coordinate_data[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}