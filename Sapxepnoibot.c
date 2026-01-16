#include <stdio.h>
#define N 6

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        printArray(arr, n);
        if (!swapped)
            break;
    }
}
int main() {
    int arr[N] = {5, 2, 9, 1, 5, 6};
    bubbleSort(arr, N);
    return 0;
}
