// 10)  C Program to Generate Multiplication Table.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,m;
    printf("Enter n: ");
    scanf("%d\n", &n);

    for (int i = 1; i < n; i++)
    {
        m = n * i;
        printf("%d\n", m);
    }
    
    return 0;
}
