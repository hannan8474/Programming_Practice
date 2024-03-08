#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void input_array(int arr[])
{
    int i;
    for (i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);
}
int main()
{
    int k, arr[SIZE], number, i, j = 0, previous_group, sum = 0, is_present = 0;
    scanf ("%d", &k);
    input_array(arr);

    number = 1000 / k;
    while (j < k)
    {
        previous_group = sum;
        sum = sum + number;
        for (i = 0; i < SIZE; i++)
        {
            if (arr[i] <= sum && arr[i] >= previous_group) //1 108 683 411 425 805 310 346 340 317
            {
                printf("%d ", arr[i]);
                is_present = 1;
            }
        }
        
        if (is_present == 0)
            printf("There is no element in this group range");
        printf("\n");
        is_present = 0;
        j++;
    }
    return 0;
}