#include <stdio.h>
int bubbleSort(int arr[],int n);
void printArray(int arr[],int n);


int bubbleSort(int arr[],int n){
    int i;
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr [j]=arr[j+1];
                temp=arr [j+1];
                return 0;
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}