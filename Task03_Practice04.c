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
    int arr[SIZE], i, rem, sum, digit = 1, count;
    input_array(arr);

    for (i = 0; i < SIZE; i++)
    {
        while (arr[i] >= 10)
        {
            sum = 0;
            while (arr[i] != 0)
            {
                rem = arr[i] % 10;
                sum = sum + rem;
                arr[i] = arr[i] / 10;
            }
            arr[i] = sum;
        }
    }
    while (digit < 10)
    {
        count = 0;
        for (i = 0; i < SIZE; i++)
        {
            if (arr[i] == digit)
                count++;
        }
        if (count != 0)     printf ("%d elements have digest equal to %d\n", count, digit);
        digit++;
    }
    return 0;
}