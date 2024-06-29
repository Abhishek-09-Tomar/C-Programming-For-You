// 19) C Program to Display Prime Numbers Between Intervals.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, m;
    printf("Enter the starting range: ");
    scanf("%d\n", &n);

    printf("Enter the last number range: ");
    scanf("%d\n", &m);

    for (int i = 0; i < m; i++)
    {
        if (i % 2 != 0){
            printf("%d ",i);
        }
       
    }
    
    return 0;
}
