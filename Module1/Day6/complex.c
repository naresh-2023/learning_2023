#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};
void read(struct Complex *c) {
    printf("Enter real part: ");
    scanf("%f", &(c->real));
    printf("Enter imaginary part: ");
    scanf("%f", &(c->imaginary));
}
void write(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imaginary);
}
struct Complex add(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}
struct Complex multiply(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return result;
}

int main() {
    struct Complex c1, c2, sum, product;
    printf("Enter first complex number:\n");
    read(&c1);
    printf("Enter second complex number:\n");
    read(&c2);
    printf("First complex number:\n");
    write(c1);
    printf("Second complex number:\n");
    write(c2);
    sum = add(c1, c2);
    printf("Sum of the two complex numbers:\n");
    write(sum);
    product = multiply(c1, c2);
    printf("Product of the two complex numbers:\n");
    write(product);

    return 0;
}