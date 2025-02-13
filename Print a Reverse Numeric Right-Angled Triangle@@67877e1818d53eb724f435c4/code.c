#include <stdio.h>
int main(){
    int i,j,n;  
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            if (j!=i){
                printf("%d ",j);
            }
            else{
                printf("%d",j);
            
                
            }
        }
        printf("\n");
    }
}