#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n)
    if(n==1){
        printf("*");
        break;
    }
    for (i=1;i<=n;i++){
        for(j=1;j<=2i-1;j++){
          if(i==1){
            printf(" * ");

          }
          else{
            printf("*");
          }
        }
        printf("\n");
    }    

}