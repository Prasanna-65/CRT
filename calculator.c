#include <stdio.h>

float calculate(float x, float y, int operation) {
    float result;
    switch (operation) {
        case 1:
            result = x + y;
            printf("%.2f + %.2f = %.2f\n", x, y, result);
            break;
        case 2:
            result = x - y;
            printf("%.2f - %.2f = %.2f\n", x, y, result);
            break;
        case 3:
            result = x * y;
            printf("%.2f * %.2f = %.2f\n", x, y, result);
            break;
        case 4:
            if (y != 0) {
                result = x / y;
                printf("%.2f / %.2f = %.2f\n", x, y, result);
            } else {
                printf("Error: Division by zero\n");
                result = 0;
            }
            break;
        case 5:
            result = x * x * x;
            printf("Cube of %.2f = %.2f\n", x, result);
            break;
        default:
            printf("Error: Invalid operation\n");
            result = 0;
            break;
    }
    return result;
}

int main() {
    float x, y, result;
    int operation;
    printf("Enter two float numbers: ");
    scanf("%f %f", &x, &y);
    printf("Enter operation (1-5): ");
    scanf("%d", &operation);
    if (operation >= 1 && operation <= 5) {
        result = calculate(x, y, operation);
    } else {
        printf("Error: Invalid operation number\n");
    }

    return 0;
}