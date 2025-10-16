#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    char zero_div, not_valid, choice;

    printf("Welcome to the calculator app!\n");

    while(1){
        zero_div = 0;

        // Prompt user for input
        printf("Enter number 1: ");
        scanf("%lf", &num1);
        printf("Enter number 2: ");
        scanf("%lf", &num2);
        
        // Get operator from user
        do {
            not_valid = 0;

            printf("Enter an operator (+, -, *, /) : ");
            // The space before %c in scanf skips any leftover whitespace (like newlines) in the input buffer.
            scanf(" %c", &operator);
            
            // Perform calculation based on the operator
            switch (operator) {
                case '+': result = num1 + num2; break;
                case '-': result = num1 - num2; break;
                case '*': result = num1 * num2; break;
                case '/':
                    if (num2 != 0) {
                        result = num1 / num2;
                    } else {
                        printf("Error: Division by zero is not allowed.\n");
                        zero_div = 1;
                    }
                    break;
                default:
                    printf("Error: Invalid operator.\n");
                    not_valid = 1;
                    break;
            }
        }while (not_valid == 1);

        if (zero_div == 0){
            printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
        }

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y') {
            printf("Thank you for using the calculator app. Goodbye!\n");
            break;
        }
    }
    return 0;
}