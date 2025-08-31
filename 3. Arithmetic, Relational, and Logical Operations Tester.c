#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("\nArithmetic Operations:\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    
    printf("\nRelational Operations:\n");
    printf("%d > %d = %d\n", a, b, a > b);
    printf("%d < %d = %d\n", a, b, a < b);
    printf("%d >= %d = %d\n", a, b, a >= b);
    printf("%d <= %d = %d\n", a, b, a <= b);
    printf("%d == %d = %d\n", a, b, a == b);
    printf("%d != %d = %d\n", a, b, a != b);
    
    printf("\nLogical Operations:\n");
    printf("(%d > 0) && (%d > 0) = %d\n", a, b, (a > 0) && (b > 0));
    printf("(%d > 0) || (%d > 0) = %d\n", a, b, (a > 0) || (b > 0));
    printf("!(%d > 0) = %d\n", a, !(a > 0));
    
    return 0;
}
