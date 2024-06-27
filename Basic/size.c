// C Program to Find the Size of int, float, double, and char.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a; char b; float c; double d;
    printf("The size of int %lu\n", sizeof(int));
    printf("The size of char %lu\n", sizeof(char));
    printf("The size of float %lu\n", sizeof(float));
    printf("The size of double %lu\n", sizeof(double));
    return 0;
}
