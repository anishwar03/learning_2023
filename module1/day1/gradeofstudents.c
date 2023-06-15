#include <stdio.h>

void displayGrade(int marks) {
    if (marks >= 90 && marks <= 100) {
        printf("Grade A\n");
      } 
    else if (marks >= 75 && marks <= 89) {
        printf("Grade B\n");
     } 
    else if (marks >= 60 && marks <= 74) {
        printf("Grade C\n");
     } 
    else if (marks >= 50 && marks <= 59) {
        printf("Grade D\n");
     } 
    else if (marks >= 0 && marks <= 49) {
        printf("Grade F\n");
     } 
    else {
        printf("Invalid marks\n");
     }
}

int main() {
    int studentMarks;
    
    printf("Enter Marks ");
    scanf("%d", &studentMarks);

    displayGrade(studentMarks);

    return 0;
}
