#include <stdio.h>
#define PI 3.14
int main ()
{
    int num_of_sides, radius, height, width;
    float area;
    printf ("Enter number of sides(0, 3, 4): ");
    scanf ("%d", &num_of_sides);
    if (num_of_sides == 0) {
        printf ("Enter radius: ");
        scanf ("%d", &radius);
        area = PI * radius * radius;
        
        printf ("A circle, The area is %f\n", area);
    }
    else if (num_of_sides == 3)
    {
        printf ("Enter height: ");
        scanf ("%d", &height);
        printf ("Enter width: ");
        scanf ("%d", &width);

        area = 0.5 * height * width;
        printf ("A triangle, The area is %f", area);
    }
    else 
    {
        printf ("Enter height: ");
        scanf ("%d", &height);
        printf ("Enter width: ");
        scanf ("%d", &width);
        if (height == width) 
        {
            area = height * width;
            printf ("A square, The area is %f", area);
        }
        else 
        {
            area = height * width;
            printf ("A rectangle, The area is %f", area);
        }
    }
    return 0;
}
