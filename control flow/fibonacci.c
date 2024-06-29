// 11) C Program to Print Fibonacci Series.

/*
Observe me : You may solve this Fibonacci Series in different ways may be you logic will we different but i want to solve this in laymann terms that everyone can understand that and make your Programming and logical thinking better than yesterday to make good programs in future.
*/

// C program to Find the fibonacci Series by iterative method.
#include <stdio.h>

void fibonacci_iterative(int n) {
    int a = 0, b = 1, c;
    printf("Fibonacci Series: ");
    
    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);
    
    for(int i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci_iterative(n);
    return 0;
}





// C program to Find the fibonacci Series by recursive method.

/*
#include <stdio.h>

int fibonacci_recursive(int n) {
    if (n <= 1) 
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

void print_fibonacci_recursive(int n) {
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    print_fibonacci_recursive(n);
    return 0;
}

*/