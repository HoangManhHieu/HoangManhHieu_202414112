#include<stdio.h>
#define N 5
void printArr( int arr[]){
    for( int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {3, 1, 10, 2, 8};
    for( int i = 0; i  < N; i++){
        int x = arr[i];
        int j = i;
        while( j > 0 && arr[j-1] > x){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] =x;
        printArr(arr);
    }
    return 0;
}