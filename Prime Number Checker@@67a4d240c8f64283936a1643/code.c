#include <math.h>
int isPrime(int n);
int isPrime(int n){
    if(n<=1){
        return 0;

    }
    int limit=sqrt(n)
    for(int i=2;i<=limit;i++){
        if(n%i==0){
            return 0;
        }
      
        
    }
    return 1;
}