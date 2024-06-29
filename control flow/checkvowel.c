// 3) C Program to Check Whether a Character is Vowel or Consonant.


#include <stdio.h>

int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;

    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // Check if the input character is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // Check if the input character is an uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // Check if the input character is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel type alphabet.\n", c);
    else
        printf("%c is a consonant type alphabet.\n", c);

    return 0;
}