#include <stdio.h>

#define PI 3.14159265

/**
 * get_circle_area - Calculates the area of a circle with the given radius.
 * @radius: The radius of the circle.
 *
 * Return: The area of the circle.
 */
float get_circle_area(float radius)
{
    return (PI * radius * radius);
}

/**
 * print_point - Prints the coordinates of a point.
 * @p: The point to print.
 *
 * Return: None.
 */
void print_point(Point p)
{
    printf("(%d, %d)\n", p.x, p.y);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    int number_of_students = 20;
    float average_score = 89.5;
    float radius = 5.0;
    Point p = {3, 4};

    printf("Number of students: %d\n", number_of_students);
    printf("Average score: %.2f\n", average_score);
    printf("Circle area with radius %.1f: %.2f\n", radius, get_circle_area(radius));
    printf("Point coordinates: ");
    print_point(p);

    return (0);
}
