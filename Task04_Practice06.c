#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int to_integer (char str[], int i)
{
    int j, sum = 0;
    for (j = i; j < i + 5; j++)
    {
        sum = 10 * sum + str[j] - '0';
    }
    return sum;
}
int main ()
{
    char str[100];
    int i, j, number, k = 0, converted_number, length, max;
    int *max_numbers;
    scanf ("%d", &number);
    max_numbers = (int *) malloc (number * sizeof (int));
    while (k < number)
    {
        scanf ("%s", str);
        length = strlen (str);
        max = 0;
        for (i = 0; i < length - 4; i++)
        {
            converted_number = to_integer (str, i);
            if (converted_number > max)
            {
                max = converted_number;
            }
        }
        max_numbers[k] = max;
        k++;
    }
    for (i = 0; i < number; i++)
    {
        printf ("%d\n", max_numbers[i]);
    }
    free(max_numbers);
    return 0;
}
