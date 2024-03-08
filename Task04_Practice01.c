#include <stdio.h>

int main ()
{
    int i, n, max;
    printf ("Enter Number: ");
    scanf ("%d", &n);
    max = n;
    for (i = 0; i < 9; i++)
    {
        if (i > 1) {
            if (max < n)    
            {
                printf ("%d is larger than %d.\n", n, max);
                max = n;
            }
        }
        printf ("Enter Number: ");
        scanf ("%d", &n);
    }
    printf ("%d is largest.", max);
    return 0;
}