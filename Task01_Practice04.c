#include <stdio.h>
#define SIZE 10

void input_array(int arr[])
{
    int i;
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
    int arr[SIZE], i, j, first_digit, last_digit, count[SIZE], count_digit;
    input_array(arr);
    // output_array(arr);

    for (i = 0; i < SIZE; i++)
    {
        count_digit = 0;
        first_digit = arr[i] / 10;
        last_digit = arr[i] % 10;
        for (j = 0; j < SIZE; j++)
        {
            if (i != j)
            {
                if (((arr[j] / 10) == first_digit) || (arr[j] % 10 == last_digit))
                    count_digit++;
            }
        }
        count[i] = count_digit;
    }
    for (i = 0; i < SIZE; i++)
    {
        if (count[i] > 0) 
            printf ("There are %d other member in the rank of %d\n", count[i], arr[i]);
        else 
            printf ("There is no member in the rank of %d\n", arr[i]);
    }
    return 0;
}