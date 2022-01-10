// malloc, 1차원 동적 할당 배열 생성하기

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array_size;

    printf("input array size : ");
    scanf("%d", &array_size);

    int *array = (int*)malloc(sizeof(int) * array_size);

    for(int i = 0; i < array_size; i++)
    {
        array[i] = i;
    }

    for(int i = 0; i < array_size; i++)
    {
        printf("array[%d] = %d  /  %d  /  %d\n", i, array[i], &array[i], sizeof(array[i]));
    }

    free(array);

    return 0;
}