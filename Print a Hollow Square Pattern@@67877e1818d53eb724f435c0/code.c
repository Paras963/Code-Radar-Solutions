#include <stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);  // Read the size of the square

    // Loop for each row
    for(i = 1; i <= n; i++) {
        // Loop for each column in the current row
        for(j = 1; j <= n; j++) {
            // Print '*' on the borders or the first/last row or column
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");  // Move to the next line after printing each row
    }

    return 0;
}
