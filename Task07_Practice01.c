#include <stdio.h>

int main ()
{
    int n, fib_0 = 0, fib_1 = 1, i, fib_n;
    printf ("Enter n: ");
    scanf ("%d", &n);
    for (i = 0; i < n - 2; i++)
    {
        fib_n = fib_0 + fib_1;
        fib_0 = fib_1;
        fib_1 = fib_n;
    }
    printf ("%dth fibonacci number: %d", n, fib_n);
}