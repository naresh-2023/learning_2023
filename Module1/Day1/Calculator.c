#include <stdio.h>

int main() {
    float operand1, operand2, res;
    char operator;
    printf("Enter Operand 1: ");
    scanf("%f", &operand1);
    printf("Enter Operator: ");
    scanf(" %c", &operator);
    printf("Enter Operand 2: ");
    scanf("%f", &operand2);
    switch (operator) {
        case '+':
            res= operand1 + operand2;
            break;
        case '-':
            res= operand1 - operand2;
            break;
        case '*':
            res= operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0) {
                res= operand1 / operand2;
            } else {
                printf("\n Zero division error");
            }
            break;
        default:
            printf("\n Invalid operator");
    }
    printf("Result: %.2f\n", res);

    return 0;
}
