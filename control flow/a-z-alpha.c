// 6) C Program to Print Alphabets From A to Z Using Loop.


#include <stdio.h>

int main() {
    char ch;

    printf("Alphabets from A to Z are: \n");
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }

    return 0;
}