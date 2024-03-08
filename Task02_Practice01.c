#include <stdio.h>

int main()
{
    int first, second, third, fourth, temp;
    scanf("%d %d %d %d", &first, &second, &third, &fourth);

    if (first > second)
    {
        temp = first;
        first = second;
        second = temp;
    }
    else if (first > third)
    {
        temp = first;
        first = third;
        third = temp;
    }
    else if (first > fourth)
    {
        temp = first;
        first = fourth;
        fourth = temp;
    }
    if (second > third)
    {
        temp = second;
        second = third;
        third = temp;
    }
    else if (second > fourth)
    {
        temp = second;
        second = fourth;
        fourth = temp;
    }
    if (third > fourth)
    {
        temp = third;
        third = fourth;
        fourth = temp;
        if (first > third)
        {
            temp = first;
            first = third;
            third = temp;
            temp = second;
            second = third;
            third = temp;
        }
        if (second > third)
        {
            temp = second;
            second = third;
            third = temp;
        }
    }
    printf ("%d %d %d %d", first, second, third, fourth);
    return 0;
}