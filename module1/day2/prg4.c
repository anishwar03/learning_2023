#include <stdio.h>

int setBits(unsigned int num) {
    int count = 0;

    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }

    return count;
}

int main() {
    unsigned int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    int totalBits = 0;

    for (int i = 0; i < size; i++) {
        totalBits += setBits(arr[i]);
    }

    printf("%d\n", totalBits);

    return 0;
}
