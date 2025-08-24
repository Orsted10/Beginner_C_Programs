#include <stdio.h>
int main() {
    int m1, m2, m3;
    float avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d", &m1, &m2, &m3);
    int total = m1 + m2 + m3;
    avg = total / 3.0;
    printf("Total: %d\nAverage: %.2f\n", total, avg);
    if(avg >= 90) printf("Grade: A\n");
    else if(avg >= 75) printf("Grade: B\n");
    else if(avg >= 60) printf("Grade: C\n");
    else printf("Grade: D\n");
    return 0;
}
