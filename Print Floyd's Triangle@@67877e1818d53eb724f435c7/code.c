
#include <stdio.h>

int main() {
    int rows, num = 1;

    
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {  // Outer loop controls rows
        for (int j = 1; j <= i; j++) {  // Inner loop controls numbers in each row
            printf("%d ", num);
            num++;
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}