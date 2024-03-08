#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int string_to_number (char string[], int i)
{
    if (string[i] >= 'A' && string[i] <= 'Z')
    {
        return string[i] - 'A' + 10;
    }
    else if (string[i] >= '0' && string[i] <= '9')
    {
        return string[i] - '0';
    }
    else if (string[i] >= 'a' && string[i] <= 'z')
    {
        return string[i] - 'a' + 10;
    }
    else 
    {
        return 0;
    }
}
int main ()
{
    char string_to_convert[100];
    int number, length, k = 0, i, converted_number, sum = 0;
    int *converted_to_number;
    scanf ("%d", &number);
    converted_to_number = (int *) malloc(number * sizeof(int));

    while (k < number) 
    {
        scanf ("%s", string_to_convert);
        length = strlen(string_to_convert);
        
        for (i = 0; string_to_convert[i] != 0; i++)
        {
            converted_number = string_to_number (string_to_convert, i);
            sum = sum + converted_number * pow(16, length - 1);
            length--;
        }
        converted_to_number[k] = sum;
        k++;
        sum = 0;
    }
    for (i = 0; i < number; i++)
    {
        printf ("%d\n", converted_to_number[i]);
    }
    free(converted_to_number);
    return 0;
}