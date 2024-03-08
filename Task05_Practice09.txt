#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10], i, number = 0, j, sum = 0, min, l_digit, min_abs_j;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (number <= 9)
    {
        printf ("%d\t", number);
        for (i = 0; i < 10; i++)
        {
            min_abs_j = 10;
            for (j = -9; j <= 9; j++)
            {
                l_digit = abs((arr[i] + j)) % 10;
                if (l_digit == number)
                {
                    if (abs(j) < min_abs_j)   
                    {
                        min_abs_j = abs(j);
                    }
                }
            }
            printf ("%d ", min_abs_j);
            sum += min_abs_j;
        }
        printf ("\t%d\n", sum);
        if (number == 0)
        {
            min = sum;
        }
        else // 12 29 25 17 21 13 24 18 19 23 //98 18 57 73 78 94 54 13 32 72  
        {
            if (sum < min)
            {
                min = sum;
            }
        }
        sum = 0;
        number++;
    }
    printf("%d\n", min);
    return 0;
}