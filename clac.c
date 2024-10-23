#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter choice:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if (num2 != 0)
                result = (float)num1 / num2;
            else
                printf("Error! Division by zero not possible.");
            break;
        default:
            printf("Error! Invalid choice.");
    }

    printf("Result: %.2f\n", result);

    return 0;
}