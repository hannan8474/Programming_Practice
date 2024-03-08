#include <stdio.h>
#include <stdlib.h>

int main()
{
    int slots, slot_start, slot_finish, i = 1, hours = 0, day = 1, total_hours = 0, end_time = 0, day_1 = 0, day_2 = 0, day_3 = 0, day_4 = 0, day_5 = 0;

    printf("Number of slots: ");
    scanf("%d", &slots);

    while (i <= slots)
    {
        scanf("%d", &slot_start);
        if (slot_start >= 24 || slot_start - end_time > 12 || (slot_start - end_time <= 1 && slot_start - end_time >= -12))
        {
            printf("Invalid Input\n");
            continue;
        }

        scanf("%d", &slot_finish);

        if (slot_finish >= 24 || slot_finish - slot_start > 12 || (slot_finish - slot_start <= 1 && slot_finish - slot_start >= -12) || abs(slot_finish - slot_start) <= 1)
        {
            printf("Invalid Input\n");
            continue;
        }

        if (day == 1)
        {
            if (slot_start > slot_finish)
            {
                day_1 = day_1 + (24 - slot_start);
                day_2 = slot_finish;
                day++;
            }
            else if (slot_start < end_time)
            {
                day_2 = day_2 + abs(slot_finish - slot_start);
                day++;
            }

            else
                day_1 = day_1 + abs(slot_finish - slot_start);
        }
        else if (day == 2)
        {
            if (slot_start > slot_finish)
            {
                day_2 = day_2 + (24 - slot_start);
                day_3 = slot_finish;
                day++;
            }
            else if (slot_start < end_time)
            {
                day_3 = day_3 + abs(slot_finish - slot_start);
                day++;
            }

            else
                day_2 = day_2 + abs(slot_finish - slot_start);
        }
        else if (day == 3)
        {
            if (slot_start > slot_finish)
            {
                day_3 = day_3 + (24 - slot_start);
                day_4 = slot_finish;
                day++;
            }
            else if (slot_start < end_time)
            {
                day_4 = day_4 + abs(slot_finish - slot_start);
                day++;
            }

            else
                day_3 = day_3 + abs(slot_finish - slot_start);
        }
        else if (day == 4)
        {
            if (slot_start > slot_finish)
            {
                day_4 = day_4 + (24 - slot_start);
                day_5 = slot_finish;
                day++;
            }
            else if (slot_start < end_time)
            {
                day_5 = day_5 + abs(slot_finish - slot_start);
                day++;
            }

            else
                day_4 = day_4 + abs(slot_finish - slot_start);
        }
        else if (day == 5)
        {
            if (slot_start > slot_finish)
                day_5 = day_5 + (24 - slot_start);
            else
                day_5 = day_5 + abs(slot_finish - slot_start);
        }
        end_time = slot_finish;
        i++;
    }
    printf("Day 1: %d\n", day_1);
    printf("Day 2: %d\n", day_2);
    printf("Day 3: %d\n", day_3);
    printf("Day 4: %d\n", day_4);
    printf("Day 5: %d\n", day_5);
    printf("Total Working Hours: %d\n", day_1 + day_2 + day_3 + day_4 + day_5);
    return 0;
}