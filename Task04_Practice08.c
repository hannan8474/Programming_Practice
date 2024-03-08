#include <stdio.h>

int main ()
{
    int arr[10], i, j, max, min;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < 10; i++)
    {   
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (i = min; i < max; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i == arr[j])
            {
                break;
            }
        }
        if (j == 10)
        {
            printf ("%d ", i);
        }
    } 
    return 0;
}