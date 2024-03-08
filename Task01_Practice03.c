#include <stdio.h>

void print_spaces(int rows, int i)
{
    int j;
    for (j = rows; j > i; j--)
        printf(" ");
}

void print_star_1_rows(int cols)
{
    int j;
    for (j = 1; j <= cols; j++)
        printf("*");
    printf("\n");
}

void print_stars(int cols)
{
    int j;
    printf("*");
    for (j = 1; j <= cols - 2; j++)
        printf(" ");
    printf("*\n");
}

int main()
{
    int rows, cols, i;

    scanf("%d %d", &rows, &cols);

    for (i = 1; i <= rows; i++)
    {
        print_spaces(rows, i);

        if (i == 1 || i == rows)
            print_star_1_rows(cols);

        else
            print_stars(cols);
    }
    return 0;
}