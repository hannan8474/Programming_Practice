#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 10

void input_array(int arr[])
{
    int i;
    // srand (time (0));
    for (i = 0; i < SIZE; i++)
    {
        // arr[i] = rand() % 100;
        scanf ("%d", &arr[i]);
    }
}
void output_array(int arr[])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[SIZE], i, j, arr_copy[SIZE], arr_count[SIZE - 5], k, count = 0, max = 0, max_element, frequency[SIZE];

    input_array(arr);

    for (i = 0; i < SIZE - 4; i++)
    {
        for  (j = i; j < i + 5; j++)
        {
            for (k = i; k < i + 5; k++)
            {
                if (arr[j] == arr[k])
                {
                    count++;
                }
            }
            frequency[j] = count;
            count = 0;
        }
        for (j = i; j < i + 5; j++)
        {
            if (frequency[j] > max)
            {
                max = frequency[j];
                max_element = arr[j];
            }
            else if (frequency[j] == max)
            {
                if (max_element < arr[j])
                {
                    max_element = arr[j];
                }
            }
        }
        for (j = i; j < i + 5; j++)
        {
            arr_copy[j] = max_element;
        }
        max = 0;
        max_element = 0;
    }
    output_array(arr_copy);
    return 0;
}