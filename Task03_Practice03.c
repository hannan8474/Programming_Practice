#include <stdio.h>
void print_f_line(int i, int n)
{
    int j;
    if (i == 1)
        for (j = 1; j <= n; j++)
            printf("*");
}
void print_f_stars_and_spaces(int i)
{
    int j;
    if (i != 1)
        printf("*");
    for (j = 1; j < i - 1; j++)
        printf(" ");
}
void print_spaces(int i, int n)
{
    int j;
    if (i != 1)
    {
        if (i != (n / 2) + 1)
            printf("*");
        for (j = 1; j <= n - (2 * i); j++)
            printf(" ");
        printf("*");
    }
}
void print_l_spaces_and_stars(int i)
{
    int j;
    for (j = 1; j < i - 1; j++)
        printf(" ");
    if (i != 1)
        printf("*");
}

int main()
{
    int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= (n / 2) + 1; i++)
    {
        print_f_line(i, n);
        print_f_stars_and_spaces(i);
        print_spaces(i, n);
        print_l_spaces_and_stars(i);
        printf("\n");
    }
    for (i = 1; i <= n / 2; i++)
    {
        if (i == n / 2)
            for (j = 1; j <= n; j++)
                printf("*");
        if (i != n / 2)
            printf("*");
        for (j = n / 2; j > i + 1; j--)
            printf(" ");
        if (i != n / 2)
        {
            printf("*");
            for (j = 1; j <= (2 * i) - 1; j++)
                printf(" ");
            printf("*");
        }
        for (j = n / 2; j > i + 1; j--)
            printf(" ");
        if (i != n / 2)
            printf("*");
        printf("\n");
    }
    return 0;
}