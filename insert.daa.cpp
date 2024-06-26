#include <stdio.h>
void insertNumber(int arr[], int *n, int pos, int num) {
    for (int i = *n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = num;
    (*n)++;
}
int main() {
    int arr[100] = {1, 2, 3, 5, 6};
    int n = 5;
    int pos = 4, num = 4;
    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    insertNumber(arr, &n, pos, num);
    printf("Array after insertion:\n");
    printf("Insertion in the middle:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

