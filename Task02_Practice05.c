#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
#define SIZE 10

void input_array (int arr[])
{
    int i;
    // srand(time(0));
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

int main ()
{
    int arr[SIZE], i, j, count, min;
    input_array (arr); //540 985 610 874 380 995 968 312 165 566
    // output_array (arr);

    for (i = 0; i < SIZE; i++)
    {
        count = 0;
        for (j = 0; j < SIZE; j++)
        {
            if (j != i)
            {
                if (arr[j] < arr[i])    count++;
            }
        }
        printf ("There are %d elements smaller than %d\n", count, arr[i]);
    }
    return 0;
}