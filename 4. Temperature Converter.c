#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int choice;
    
    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
    } else {
        printf("Invalid choice\n");
    }
    
    return 0;
}
