#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void RandNum(int size_arr, int range) {

    int* my_arr;
    int temp = 0;

    my_arr = (int*)malloc(sizeof(int) * size_arr);
    my_arr[0] = rand() % range + 1;
    // 

    // printf("my_arr[0] = %d  ", my_arr[0]);
    printf("%d  ", my_arr[0]);

    for (int i = 1; i < size_arr; i++)
    {
        temp = rand() % range + 1;

        int k = 0;
        do
        {
            if (temp == my_arr[k])
            {
                temp = rand() % range + 1;
                k = 0;
            }
            else
            {
                k++;
            }

        } while (k < i);

        my_arr[i] = temp;
        // printf("my_arr[%d] = %d  ", i, my_arr[i]);
        printf("%d  ", my_arr[i]);
    }

    free(my_arr);

}

void SortedNum(int size_arr)
{
    int* my_arr = (int*)malloc(sizeof(int) * size_arr);

    for (int i = 0; i < size_arr; i++)
    {
        my_arr[i] = i + 1;
        printf("%d  ", my_arr[i]);
    }
}


void myInputBuffer(void) {
    while (getchar() != '\n');
}


int main(void) {

    srand(time(NULL));
    int my_num = 0, my_range = 0;
    
    printf("생성하실 난수의 개수를 입력해주세요.\n입력 : ");
    scanf("%d", &my_num);
    myInputBuffer();
    printf("생성하실 난수의 최댓값(range)를 입력해주세요.\n입력 : ");
    scanf("%d", &my_range);
    myInputBuffer();

    RandNum(my_num, my_range);


    printf("생성하실 배열의 크기를 입력해주세요.\n입력 : ");
    scanf("%d", &my_num);
    myInputBuffer();

    SortedNum(my_num);

    return 0;
}
