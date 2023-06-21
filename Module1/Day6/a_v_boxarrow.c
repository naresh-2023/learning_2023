#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

void Box_a_v(struct Box *box) {
    double volume = box->length * box->width * box->height;
    double surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
    
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
}

int main() {
    struct Box myBox;
    struct Box *Ptr = &myBox;

    printf("Enter the length of the box: ");
    scanf("%lf", &Ptr->length);
    
    printf("Enter the width of the box: ");
    scanf("%lf", &Ptr->width);
    
    printf("Enter the height of the box: ");
    scanf("%lf", &Ptr->height);

    Box_a_v(Ptr);

    return 0;
}