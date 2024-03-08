#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 10

void input_array(int arr[])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void output_array(int arr[])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[SIZE], i, j, k;
    input_array(arr);

    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            for (k = j + 1; k < SIZE; k++)
            {
                if (k != i && k != j)
                {
                    if ((arr[i] + arr[j] == arr[k]) || abs(arr[i] - arr[j]) == arr[k])
                    {
                        printf("%d %d %d\n", arr[i], arr[j], arr[k]);
                    }
                }
            }
        }
    } // 53 93 29 61 4 95 2 59 40 67
    return 0;
}