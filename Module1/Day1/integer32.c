#include <stdio.h>
int bit_operations(int num, int oper_type);
int main() {
    int num, oper_type,res;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    printf("Enter the operation type (1: Set 1st bit, 2: Clear 31st bit, 3: Toggle 16th bit): ");
    scanf("%d", &oper_type);
    res = bit_operations(num, oper_type);
    printf("Result: %d\n", res);
    return 0;
}
int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num |= 1;  // Set 1st bit
            break;
        case 2:
            num &= ~(1 << 31);  // Clear 31st bit
            break;
        case 3:
            num ^= 1 << 16;
            break;
        default:
            printf("Invalid option\n");
    }
    return num;
}