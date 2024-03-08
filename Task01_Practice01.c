#include <stdio.h>

int main()
{
    float num, avg, sum = 0.0, max, min, second_max, second_min, previous_num;
    int i;
    printf("Enter 15 numbers: \n");
    scanf("%f", &num);
    max = num;
    min = num;
    for (i = 0; i < 14; i++)
    {
        if (i > 1)
        {
            if (max < num)
            {
                second_max = max;
                max = num;
            }
            if (min > num)
            {
                second_min = min;
                min = num;
            }
            if (max != num) 
                if (num > second_max)  second_max = num;
            if (min != num) 
                if (num < second_min)  second_min = num;
        }
        sum = sum + num;
        scanf ("%f", &num);
    }
    printf ("Average: %f\nMaximum Number: %f\nSecond Maximum: %f\nMinimum Number: %f\nSecond Minimum: %f", sum / 15, max, second_max, min, second_min);
    return 0;
}