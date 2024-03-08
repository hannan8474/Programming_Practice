#include <stdio.h>

int main ()
{
    int arr[10], i;
    for (i = 0; i < 10; i++)
    {
        scanf ("%d", &arr[i]);
    }
    for (i = 0; i < 9; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            printf ("%d ", arr[i]);
        }
        else if (arr[i] > arr[i - 1])
        {
            printf ("%d", arr[i]);
        }
        else
        {
            printf ("\n");
        }
    }
    return 0;
}