#include <stdio.h>


void printSummary(int rollNo, char name[], float marks[]) {
    float totalMarks = 0;
    float percentage;

    for (int i = 0; i < 3; i++) {
        totalMarks += marks[i];
    }

    percentage = (totalMarks / (300)) * 100;

    printf("Roll No: %d\n", rollNo);
    printf("Full Name: %s\n", name);


        printf("Marks for Subject Physics: %.2f\n", marks[0]);
        printf("Marks for Subject Math: %.2f\n", marks[1]);
        printf("Marks for Subject Chemistry: %.2f\n", marks[2]);


    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
}

int main() {
    int rollNo;
    char name[50];
    float marks[3];

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

   
        printf("Enter Marks for Physics:");
        scanf("%f", &marks[0]);
    printf("Enter Marks for Maths:");
        scanf("%f", &marks[1]);
         printf("Enter Marks for Chemistry:");
        scanf("%f", &marks[2]);
    
    printf("\nStudent Summary\n");
    printSummary(rollNo, name, marks);

    return 0;
}
