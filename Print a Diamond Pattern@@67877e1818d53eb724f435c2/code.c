#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",n);
    for (i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");

        }
        for(j=1;j<=2n-1;j++){
            printf("*");

        }
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
          

        }
        for(j=1;<=2n-1;j++){
            printf("*");
        }


}