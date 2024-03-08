#include <stdio.h>

int main()
{
    int i, k, n, sum, rem, flag = 0;
    
    scanf("%d", &k);

    for (i = 1000; i <= 9999; i++)
    {
        n = i;
        sum = 0;
        while (n != 0)
        {
            rem = n % 10;
            sum = sum + rem;
            n = n / 10;
        }
        if (sum == k)
        {
            printf("%d ", i);
            flag++;
        }
    }
    if (flag == 0)
        printf("NO OUTPUT");
    return 0;
}