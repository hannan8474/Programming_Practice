#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
#define SIZE 10

void input_array (int arr[])
{
    int i;
    // srand(time(0));
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void output_array (int arr[])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf ("%d ", arr[i]);
    }
    printf ("\n");
}
int main ()
{
    int arr[SIZE], count_odd = 0, count_even = 0, i;
    input_array (arr);
    // output_array (arr);
    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_even++;
        }    
        else  
        {
            count_odd++;
        }                                 
    }
    if (count_even >= count_odd)
    {
        for (i = 0; i < SIZE; i++)
        {
            if (arr[i] % 2 != 0)
            {
                arr[i] = arr[i] + 1;
            }    
        }
    }
    else
    {
        for (i = 0; i < SIZE; i++)
        {
            if (arr[i] % 2 == 0)
            {
                arr[i] = arr[i] + 1;
            }    
        }
    }
    output_array(arr);
    return 0;
}