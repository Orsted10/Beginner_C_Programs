#include <stdio.h>

int main() {
    float sub1, sub2, sub3, total, average;
    char grade;
    
    printf("Enter marks in 3 subjects: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);
    
    total = sub1 + sub2 + sub3;
    average = total / 3;
    
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);
    
    return 0;
}
