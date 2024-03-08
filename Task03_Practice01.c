#include <stdio.h>

int main ()
{
    int start, end, k, i;

    printf ("Enter starting number: ");
    scanf ("%d", &start);
    printf ("Enter ending number: ");
    scanf ("%d", &end);
    printf ("Enter k: ");
    scanf ("%d", &k); 

    for (i = start; i <= end; i++) 
        if (i % k == 0)     printf ("%d ", i);
    return 0;
}