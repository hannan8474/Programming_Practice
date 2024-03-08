#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
#define SIZE 10

void input_array (int arr[])
{
    int i;
    // srand (time(0));
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
        printf ("%d ", arr[i]); //8 84 44 3 49 81 39 51 35 23
    }
    printf ("\n");
}

int main ()
{
    int arr[SIZE], i;
    input_array (arr);
    // output_array (arr);
    for (i = 0; i < SIZE - 2; i++)
    {
        arr[i + 1] = (arr[i] + arr[i + 1] + arr[i + 2]) / 3;
    }
    output_array (arr);
    return 0;
}