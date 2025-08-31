#include <stdio.h>

int main() {
    char name[50];
    int age;
    char course[30];
    
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter course: ");
    scanf("%s", course);
    
    printf("\n--- Student Profile ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Course: %s\n", course);
    
    return 0;
}
