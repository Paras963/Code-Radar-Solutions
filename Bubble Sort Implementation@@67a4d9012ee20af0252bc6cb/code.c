#include <stdio.h>
int bubblesort(int arr[],int n);

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    bubblesort(arr,n);
    printarray(arr,n);
    return 0;
}
int bubblesort(int arr[],int n){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr [j]=arr[j+1];
                int temp=arr [j+1];
                return 0;
            }
        }
    }
}
void printarray(int arr[],int n){
    for(i=0;i<n;i++){
        printf("%d",arr[i])
    }
}