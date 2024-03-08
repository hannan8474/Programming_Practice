#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 10

void input_array (int arr[])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        scanf ("%d", &arr[i]);
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
void bubble_sort(int arr[])
{
    int i, j, temp;
    for (i = 0; i < SIZE - 1; i++)
    {
        for (j = 0; j < SIZE - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int linear_search(int arr[], int number)
{
    int i;
    
    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] == number)
        {
            return 1;
        }
    }
    if (i == SIZE)
    {
        return -1;
    }
}
int binary_search(int arr[], int number)
{
    int i, mid, end = SIZE - 1, start = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (number == arr[mid])
        {
            return 1;
        }
        else if (number < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (i == SIZE)
    {
        return -1;
    }
}