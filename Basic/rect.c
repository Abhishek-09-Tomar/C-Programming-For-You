#include <stdio.h>

int main()
{
    int area, length, breadth;
    printf("Enter the length of rectangle: ");
    scanf("%d\n", &length);

    printf("Enter the breadth of rectangle: ");
    scanf("%d\n", &breadth);

    area = length * breadth;

    printf("The area of rectangle is %d\n", area);

    return 0;
}
