#include <stdio.h>


void reverseArray(int arr[], int size, int result[]) {
    int i, j;

    for (i = size - 1, j = 0; i >= 0; i--, j++) {
        result[j] = arr[i];
    }
}

int main() {
   int SIZE;
   scanf("%d",&SIZE);
   int arr[SIZE];
        
        for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
           }
    int reversed[SIZE];
    int i;

    
    printf("Original Array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, SIZE, reversed);

   
    printf("Reversed Array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}

