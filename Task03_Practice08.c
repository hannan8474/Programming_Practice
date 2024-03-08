#include <stdio.h>

int main()
{
    int arr[10], i, direct = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 9; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            if (arr[i] < arr[i - 1] && i != 0)
            {
                printf ("%d\n", arr[i]);
            }
            if (i + 2 == 10)
            {
                printf("%d %d\n", arr[i], arr[i + 1]);
            }
            else
            {
                printf("%d ", arr[i]);
                direct = 1;
            }
        }
        else if (arr[i] > arr[i + 1])
        {
            if (direct == 1)
            {
                printf ("%d\n", arr[i]);
                direct = 0;
            }
            if (i + 2 == 10)
            {
                printf("%d %d\n", arr[i], arr[i + 1]);
            }
            else
            {
                printf ("%d ", arr[i]);
            }
        }
    }
    return 0;
}