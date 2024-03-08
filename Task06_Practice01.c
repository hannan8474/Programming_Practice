#include <stdio.h>

int main ()
{
    int n, rem, place = 1, octal = 0;
    scanf ("%d", &n);
    while (n != 0)
    {
        rem = n % 8;
        n = n / 8;
        octal = octal + rem * place;
        place = place * 10;
    }
    printf ("Octal form: %d", octal);
    return 0;
}