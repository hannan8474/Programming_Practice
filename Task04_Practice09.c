#include <stdio.h>

int main ()
{
    int arr[10], i, error_margin;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf ("%d", &error_margin);

    for (i = 1; i < 9; i++)
    {
        if ((arr[i] - (arr[i - 1] + arr[i + 1]) / 2) > error_margin || ((arr[i - 1] + arr[i + 1]) / 2) - arr[i] > error_margin)
        {
            arr[i] = (arr[i - 1] + arr[i + 1]) / 2;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf ("%d ", arr[i]); //12 29 25 17 21 13 24 18 19 23 
    }
    return 0;
}