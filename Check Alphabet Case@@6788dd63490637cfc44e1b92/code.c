#include <stdio.h>



int main() {
    char ab;
    scanf("%c",&ab);
    if (ab >= 'a' && ab <= 'z'){
        printf("Lowercase");

    }
    else if (ab >= 'A' && ab <= 'Z' ){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet")
    }
 
    return 0;
}