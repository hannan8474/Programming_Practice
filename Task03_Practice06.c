#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char number_to_string (int rem)
{
    if (rem < 10)
    {
        return '0' + rem;
    }
    else if (rem >= 10)
    {
        return rem + 'A' - 10;
    }
    else 
    {
        return 0;
    }
}
int main ()
{
    char str[10], converted_number;
    int number_to_convert, number, k = 0, rem, i, length, j, temp;
    
    scanf ("%d", &number);

    while (k < number)
    {
        i = 0;
        scanf ("%d", &number_to_convert);
        while (number_to_convert != 0)
        {
            rem = number_to_convert % 16;
            converted_number = number_to_string (rem);
            number_to_convert = number_to_convert / 16;
            str[i] = converted_number;
            i++;
        }
        str[i] = '\0';
        length = strlen (str);
        for (j = 0; j < length / 2; j++)
        {
            temp = str[j];
            str[j] = str[length - j - 1];
            str[length - j - 1] = temp;
        }
        for (j = 0; j < length; j++)
        {
            printf ("%c", str[j]);
        }
        printf ("\n");
        k++;
    }
    return 0;
}