#include <stdio.h>
#include<stdlib.h>
#include<string.h>

//by reference from google
void swap(void* a, void* b, size_t size) {
    char* temp = (char*)malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

int main() {
    int num1 = 10, num2 = 20;
    
    swap(&num1, &num2, sizeof(int));
    printf("num1 = %d, num2 = %d\n", num1, num2);

    char char1 = 'A', char2 = 'B';
    
    swap(&char1, &char2, sizeof(char));
    printf("char1 = %c, char2 = %c\n", char1, char2);

    float float1 = 3.14, float2 = 2.71;
   
    swap(&float1, &float2, sizeof(float));
    printf("float1 = %.2f, float2 = %.2f\n", float1, float2);

    return 0;
}
