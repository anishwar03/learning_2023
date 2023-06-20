#include <stdio.h>

int main() {
    int n;
    int min, max;
    scanf("%d",&n);
    int arr[n];
   
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
