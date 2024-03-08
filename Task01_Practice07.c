#include <stdio.h>
#define SIZE 10

int main ()
{
    int arr[SIZE], i;
    
    for (i = 0; i < SIZE; i++)
    {
        scanf ("%d", &arr[i]);
    }
    for (i = 0; i < SIZE; i++)
    {
        printf ("%d ", arr[i]);
    }
    return 0;
}