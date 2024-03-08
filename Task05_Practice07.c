#include <stdio.h>

int main ()
{
    int arr[10], i, sum = 0;
    float avg;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    avg = sum / 10.0;
    
    for (i = 0; i < 10; i++)
    {
        if (avg > arr[i])
        {
            printf ("%d is smaller\n", arr[i]);
        }
        else if (avg < arr[i])
        {
            printf ("%d is larger\n", arr[i]);
        }
        else
        {
            printf ("%d is equal\n", arr[i]);
        }
    }
    return 0;
}