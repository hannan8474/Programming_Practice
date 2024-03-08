#include <stdio.h>

int main()
{
    int n, tc, moves, i;
    scanf("%d", &tc);
    for (i = 1; i <= tc; i++)
    {
        moves = 0;
        scanf("%d", &n);
        while (n >= 3)
        {
            if (n % 6 == 0)
                n = n / 6;
            else if ((n * 2) / 6 == 2 || (n * 2) / 6 == 4)
                break;
            else
                n = n * 2;
            moves++;
        }
        if (n == 1)
            printf("%d\n", moves);
        else
            printf("-1\n");
    }

    return 0;
}