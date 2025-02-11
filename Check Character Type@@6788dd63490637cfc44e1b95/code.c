
#include <stdio.h>
#include <ctype.h>  // For isdigit() function

int main() {
    char ch;
    
    // Take input from the user

    scanf("%c", &ch);
    
    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("'%c' is a digit.\n", ch);
    }
    // Check if the character is a vowel (both lowercase and uppercase)
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("'%c' is a vowel.\n", ch);
    }
    // Check if the character is a consonant (it should be an alphabetic character but not a vowel)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("'%c' is a consonant.\n", ch);
    }
    // If the character doesn't match any of the above, it's a special character
    else {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}