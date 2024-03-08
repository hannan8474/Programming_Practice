#include <stdio.h>

int main()
{
    int n, i, j, count;
    scanf("%d", &n);
    count = n;
    for (i = 1; i <= n; i++)
    {
        count = n;
        for (j = 1; j < i; j++)
            printf("%d", count--);
        for (j = 1; j <= (2 * n) - (2 * i) + 1; j++)
            printf("%d", n - i + 1);
        for (j = 1; j < i; j++)
            printf("%d", ++count);
        printf("\n");
    }
    for (i = 1; i <= n - 1; i++)
    {
        count = n;
        for (j = n - i; j > 1; j--)
            printf("%d", count--);
        for (j = 1; j <= (2 * i - 1) + 2; j++)
            printf("%d", i + 1);
        for (j = n - i; j > 1; j--)
            printf("%d", ++count);
        printf("\n");
    }
    return 0;
}