#include <stdio.h>
#include <math.h>

// function to calculate the sum of two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// function to calculate the difference between two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

// function to calculate the product of two numbers
float multiply(float num1, float num2) {
    return num1 * num2;
}

// function to calculate the quotient of two numbers
float divide(float num1, float num2) {
    return num1 / num2;
}

// function to calculate the square root of a number
float squareRoot(float num) {
    return sqrt(num);
}

// function to calculate the power of a number
float power(float num, int m) {
    return pow(num, m);
}

int main() {
    float num1, num2, result;
    int m, choice;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the operation to be performed:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Square root\n6. Power\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = add(num1, num2);
            printf("%.2f + %.2f = %.2f", num1, num2, result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("%.2f - %.2f = %.2f", num1, num2, result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("%.2f * %.2f = %.2f", num1, num2, result);
            break;
        case 4:
            result = divide(num1, num2);
            printf("%.2f / %.2f = %.2f", num1, num2, result);
            break;
        case 5:
            result = squareRoot(num1);
            printf("Square root of %.2f = %.2f", num1, result);
            break;
        case 6:
            printf("Enter the power: ");
            scanf("%d", &m);
            result = power(num1, m);
            printf("%.2f ^ %d = %.2f", num1, m, result);
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}
