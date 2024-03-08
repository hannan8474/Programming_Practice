#include <stdio.h>

int main()
{
    int arr[10], k, i, number = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    while (number < k)
    {
        for (i = 0; i < 10 - number - 1; i++)
        {
            arr[i] = arr[i] - arr[i + 1];
        }
        number++; // 12 29 39 67 21 13 34 78 19 11
    }
    for (i = 0; i < 10 - k; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}