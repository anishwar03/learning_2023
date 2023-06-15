#include <stdio.h>

void printExponent(double num) {
    unsigned long long bits = *(unsigned long long *)&num;  

   
    unsigned int exponent = (bits >> 52) & 0x7FF;

    printf("Exponent (Hexadecimal): 0x%03X\n", exponent);
    printf("Exponent (Binary): ");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double num ;
    scanf("%lf",&num);
    printf("Number: %lf\n", num);
    printExponent(num);

    return 0;
}
