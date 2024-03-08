#include <stdio.h>

int main ()
{
    int arr[10], num, i;
    for (i = 0; i < 10; i++)
    {
        scanf ("%d", &arr[i]);
    }
    scanf ("%d", &num);

    if (num > 10 && num < 0)
    {
        printf ("-999999999");
    }
    else 
    {
        printf ("%d", arr[num - 1]);
    }
    return 0;
}