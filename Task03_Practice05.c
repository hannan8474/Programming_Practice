#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
#define SIZE 10

void input_array (int arr[])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        scanf ("%d", &arr[i]);
    }
}
void output_array (int arr[])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf ("%d ", arr[i]);
    }
    printf ("\n");
}

int main()
{
    int arr[SIZE], i, j;
    input_array(arr);
    // output_array(arr);

    for (i = 0; i < SIZE; i++)
    {
        for (j = i; j < SIZE; j++)
        {
            if (i != j)
            {
                if ((arr[i] + arr[j]) % 2 == 0)
                {
                    printf ("%d %d ", arr[i], arr[j]); //23 6 9 47 26 7 16 49 0 8
                }
            }
        }
    }
    return 0;
}