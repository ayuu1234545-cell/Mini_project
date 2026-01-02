#include <stdio.h>

// Function declarations
void add();
void subtract();
void multiply();
void divide();
void squareRoot();
void power();

int main() {
    int choice;

    do {
        printf("\n==== MULTI-FUNCTIONAL CALCULATOR ====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square Root\n");
        printf("6. Power\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: add(); break;
            case 2: subtract(); break;
            case 3: multiply(); break;
            case 4: divide(); break;
            case 5: squareRoot(); break;
            case 6: power(); break;
            case 0: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while(choice != 0);

    return 0;
}

// Function definitions

void add() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result = %.2f\n", a + b);
}

void subtract() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result = %.2f\n", a - b);
}

void multiply() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result = %.2f\n", a * b);
}

void divide() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (b == 0) {
        printf("Error: Division by zero not allowed.\n");
    } else {
        printf("Result = %.2f\n", a / b);
    }
}

// Square root using simple logic (trial method)
void squareRoot() {
    float num, i;
    printf("Enter a number: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("Error: Cannot find square root of negative number.\n");
        return;
    }

    for (i = 0; i * i <= num; i += 0.01);

    printf("Approximate Square Root = %.2f\n", i);
}

// Power calculation using loop
void power() {
    int exp;
    float base, result = 1;

    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter exponent (positive integer): ");
    scanf("%d", &exp);

    if (exp < 0) {
        printf("Negative exponent not supported in this program.\n");
        return;
    }

    for (int i = 1; i <= exp; i++) {
        result = result * base;
    }

    printf("Result = %.2f\n", result);
}




