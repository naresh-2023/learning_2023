#include<stdio.h>
#include <conio.h>
void swap(void* ptr1, void* ptr2, size_t size) {
    char* g1 = (char*)ptr1;
    char* g2 = (char*)ptr2;
    char temp;
    for (size_t i = 0; i < size; ++i) {
        temp = *(g1+i);
        *(g1+i) = *(g2+i);
        *(g2+i) = temp;
    }
}
int main() {
    int d1, d2;
    double d3,d4;
    printf("Enter two integers: ");
    scanf("%d %d",&d1,&d2);
    printf("Enter two doubles: ");
    scanf("%lf %lf",&d3,&d4);
    printf("Before swap:d1=%d,d2=%d\n",d1,d2);
    swap(&d1,&d2, sizeof(int));
    printf("After swap:d1=%d,d2=%d\n",d1,d2);
    printf("Before swap:d3= %lf,d4=%lf\n",d3,d4);
    swap(&d3,&d4, sizeof(double));
    printf("After swap:d3=%lf,d4=%lf\n",d3,d4);
    return 0;
}