
#include <stdio.h>

int main() {
    float a, b;
    int choice;

    printf("===== SIMPLE CALCULATOR =====\n");

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("\nChoose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result = %.2f\n", a + b);
            break;

        case 2:
            printf("Result = %.2f\n", a - b);
            break;

        case 3:
            printf("Result = %.2f\n", a * b);
            break;

        case 4:
            if (b != 0) {
                printf("Result = %.2f\n", a / b);
            }
            else {
                printf("Error! Cannot divide by zero.\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
