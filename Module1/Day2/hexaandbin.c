#include <stdio.h>
#include <stdint.h>
uint16_t Exp(double *xptr) {
    uint64_t *uptr = (uint64_t *)xptr;
    uint16_t exponent = (*uptr >> 52) & 0x7FF;
    return exponent;
}
void Hex(double *xptr) {
    uint16_t exponent =Exp(xptr);
    printf("Exponent in hexadecimal: 0x%X\n", exponent);
}
void Bin(double *xptr) {
    uint16_t exponent =Exp(xptr);
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}
int main() {
    double x = 0.7;
    double *x_ptr = &x;
    Hex(x_ptr);
    Bin(x_ptr);
    return 0;
}
