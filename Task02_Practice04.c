#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
#define SIZE 10

void input_array(int arr[])
{
    int i;
    // srand (time (0));
    for (i = 0; i < SIZE; i++)
        scanf ("%d", &arr[i]);
}

void output_array(int arr[])
{
    int i;
    for (i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[SIZE], arr_sorted[SIZE], i, is_found = 0, count = 0, max_digit, min_digit;
    input_array(arr);
    // output_array(arr);
    max_digit = arr[0];
    min_digit = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] > max_digit)     max_digit = arr[i];
        if (arr[i] < min_digit)     min_digit = arr[i];
    }
    max_digit = max_digit / 10;
    min_digit = min_digit / 10;
    while (min_digit <= max_digit)
    {
        for (i = 0; i < SIZE; i++)
        {
            if (arr[i] / 10 == min_digit)
            {
                printf ("%d ", arr[i]);
                is_found = 1;
            }
        }
        if (is_found == 0)      printf ("No element in the group %d0", min_digit);
        is_found = 0;
        printf ("\n");
        min_digit++;
    }

    return 0;
}