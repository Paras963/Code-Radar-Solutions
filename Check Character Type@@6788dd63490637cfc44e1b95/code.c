
#include <stdio.h>
#include <ctype.h>  // For isdigit() function

int main() {
    char ch;
    
    // Take input from the user

    scanf("%c", &ch);
    
    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("Digit");
    // Check if the character is a vowel (both lowercase and uppercase)
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel");
    }
    // Check if the character is a consonant (it should be an alphabetic character but not a vowel)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant");
    }
    // If the character doesn't match any of the above, it's a special character
    else {
        printf(" Special Character");
    }

    return 0;
}