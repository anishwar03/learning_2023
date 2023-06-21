#include <stdio.h>
struct Box {
    double length;
    double width;
    double height;
};


double calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box* box) {
    double length = box->length;
    double width = box->width;
    double height = box->height;
    return 2 * (length * width + length * height + width * height);
}

int main() {
        struct Box myBox;

     printf("Enter the length of the box: ");
    scanf("%lf", &myBox.length);

    printf("Enter the width of the box: ");
    scanf("%lf", &myBox.width);

    printf("Enter the height of the box: ");
    scanf("%lf", &myBox.height);

    
    struct Box* boxPtr = &myBox;

       double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);

   
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}