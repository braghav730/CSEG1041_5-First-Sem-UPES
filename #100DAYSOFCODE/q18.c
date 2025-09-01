//Write a program to assign grades based on a percentage input.
#include <stdio.h>

int main() {
    float percentage;
    char grade;

    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Grade: %c\n", grade);

    return 0;
}
