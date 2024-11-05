#include <stdio.h>
#include <math.h>

// Function declarations
void performArithmeticOperations();
void performScientificOperations();
void performUnitConversions();

void addNumbers();
void subtractNumbers();
void multiplyNumbers();
void divideNumbers();

void calculateSquareRoot();
void calculateExponent();
void calculateLogarithm();
void calculateFactorial();

void convertLength();
void convertTemperature();
void convertMass();

int main() {
    int choice;

    while (1) {
        printf("\nAdvanced Calculator Menu:\n");
        printf("1. Arithmetic Operations\n");
        printf("2. Scientific Calculations\n");
        printf("3. Unit Conversions\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                performArithmeticOperations();
                break;
            case 2:
                performScientificOperations();
                break;
            case 3:
                performUnitConversions();
                break;
            case 4:
                printf("Exiting the calculator. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Function for arithmetic operations
void performArithmeticOperations() {
    int operationChoice;
    while (1) {
        printf("\nArithmetic Operations:\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Back to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &operationChoice);

        switch (operationChoice) {
            case 1:
                addNumbers();
                break;
            case 2:
                subtractNumbers();
                break;
            case 3:
                multiplyNumbers();
                break;
            case 4:
                divideNumbers();
                break;
            case 5:
                return;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

void addNumbers() {
    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 + num2);
}

void subtractNumbers() {
    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 - num2);
}

void multiplyNumbers() {
    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 * num2);
}

void divideNumbers() {
    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    if (num2 != 0) {
        printf("Result: %.2lf\n", num1 / num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

// Function for scientific operations
void performScientificOperations() {
    int operationChoice;
    while (1) {
        printf("\nScientific Operations:\n");
        printf("1. Square Root\n2. Exponentiation (Power)\n3. Logarithm (Base 10)\n4. Factorial\n5. Back to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &operationChoice);

        switch (operationChoice) {
            case 1:
                calculateSquareRoot();
                break;
            case 2:
                calculateExponent();
                break;
            case 3:
                calculateLogarithm();
                break;
            case 4:
                calculateFactorial();
                break;
            case 5:
                return;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

void calculateSquareRoot() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num >= 0) {
        printf("Square root: %.2lf\n", sqrt(num));
    } else {
        printf("Error: Negative numbers don't have real square roots.\n");
    }
}

void calculateExponent() {
    double base, exponent;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exponent);
    printf("Result: %.2lf\n", pow(base, exponent));
}

void calculateLogarithm() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num > 0) {
        printf("Logarithm (Base 10): %.2lf\n", log10(num));
    } else {
        printf("Error: Logarithm is only defined for positive numbers.\n");
    }
}

void calculateFactorial() {
    int num;
    long long result = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= num; ++i) {
            result *= i;
        }
        printf("Factorial of %d is: %lld\n", num, result);
    }
}

// Function for unit conversions
void performUnitConversions() {
    int conversionChoice;
    while (1) {
        printf("\nUnit Conversions:\n");
        printf("1. Length Conversion\n2. Temperature Conversion\n3. Mass Conversion\n4. Back to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &conversionChoice);

        switch (conversionChoice) {
            case 1:
                convertLength();
                break;
            case 2:
                convertTemperature();
                break;
            case 3:
                convertMass();
                break;
            case 4:
                return;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

void convertLength() {
    double value;
    int choice;
    printf("\nLength Conversion:\n");
    printf("1. Meters to Kilometers\n2. Kilometers to Meters\n3. Meters to Centimeters\n4. Centimeters to Meters\n5. Back to Unit Conversions\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%lf", &value);

    switch (choice) {
        case 1:
            printf("%.2lf meters = %.2lf kilometers\n", value, value / 1000);
            break;
        case 2:
            printf("%.2lf kilometers = %.2lf meters\n", value, value * 1000);
            break;
        case 3:
            printf("%.2lf meters = %.2lf centimeters\n", value, value * 100);
            break;
        case 4:
            printf("%.2lf centimeters = %.2lf meters\n", value, value / 100);
            break;
        case 5:
            return;
        default:
            printf("Invalid choice.\n");
    }
}

void convertTemperature() {
    double value;
    int choice;
    printf("\nTemperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Celsius to Kelvin\n4. Kelvin to Celsius\n5. Back to Unit Conversions\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%lf", &value);

    switch (choice) {
        case 1:
            printf("%.2lf Celsius = %.2lf Fahrenheit\n", value, (value * 9 / 5) + 32);
            break;
        case 2:
            printf("%.2lf Fahrenheit = %.2lf Celsius\n", value, (value - 32) * 5 / 9);
            break;
        case 3:
            printf("%.2lf Celsius = %.2lf Kelvin\n", value, value + 273.15);
            break;
        case 4:
            printf("%.2lf Kelvin = %.2lf Celsius\n", value, value - 273.15);
            break;
        case 5:
            return;
        default:
            printf("Invalid choice.\n");
    }
}

void convertMass() {
    double value;
    int choice;
    printf("\nMass Conversion:\n");
    printf("1. Kilograms to Grams\n2. Grams to Kilograms\n3. Kilograms to Pounds\n4. Pounds to Kilograms\n5. Back to Unit Conversions\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%lf", &value);

    switch (choice) {
        case 1:
            printf("%.2lf kilograms = %.2lf grams\n", value, value * 1000);
            break;
        case 2:
            printf("%.2lf grams = %.2lf kilograms\n", value, value / 1000);
            break;
        case 3:
            printf("%.2lf kilograms = %.2lf pounds\n", value, value * 2.20462);
            break;
        case 4:
            printf("%.2lf pounds = %.2lf kilograms\n", value, value / 2.20462);
            break;
        case 5:
            return;
        default:
            printf("Invalid choice.\n");
    }
}
