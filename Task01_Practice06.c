#include <stdio.h>
#include <stdlib.h>


int main()
{
    char c[100];
    int i, k = 0, number, converted_number = 0, length;
    int *p;
    scanf("%d", &number);
    p = (int *)malloc(number * sizeof(int));
    while (k < number)
    {
        scanf ("%s", c);
        
        for (i = 0; c[i] != 0; i++)
        {
            if (c[i] >= '1' && c[i] <= '9')
            {
                converted_number = 10 * converted_number + (c[i] - '0');
            }
            else if (c[i] == '0')
            {
                converted_number = 10 * converted_number;
            }
        }
        p[k] = converted_number;
        converted_number = 0;
        k++;
    }
    for (i = 0; i < number; i++)
    {
        printf ("%d\n", p[i]); 
    }
    return 0;
}
// A4bc9dfdsfs0g:;;;''1

// 000000abd00000degg00000

// 00000000a000000000bfd3a4b0**01d

// abcdefghfjsdakfjsdkfsafksja'-=]''