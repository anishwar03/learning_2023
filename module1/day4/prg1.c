#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    float avg;
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
 