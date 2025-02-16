
#include <stdio.h>

int main() {
    int i, j, n;
    char ch;
    ch='A';

   
    scanf("%d", &n);

   
    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= i; j++) {
          if (j!=i){
            printf("%c ",ch);

          }
          else{
            printf("%c",ch);
          }
          ch++;
        }
        printf("\n"); 
    }

    return 0;
}