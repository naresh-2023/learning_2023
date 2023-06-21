#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
};
int main() {
    struct Student student1 = {"Gupta",21};
    struct Student student2 = {"Chandu",20};
    printf("Before swapping:\n");
    printf("Student 1: Name - %s, Age - %d\n", student1.name, student1.age);
    printf("Student 2: Name - %s, Age - %d\n", student2.name, student2.age);
    char temp_name[50];
    int temp_age;
    strcpy(temp_name, student1.name);
    strcpy(student1.name, student2.name);
    strcpy(student2.name, temp_name);
    temp_age = student1.age;
    student1.age = student2.age;
    student2.age = temp_age;
    printf("\nAfter swapping:\n");
    printf("Student 1: Name - %s, Age - %d\n", student1.name, student1.age);
    printf("Student 2: Name - %s, Age - %d\n", student2.name, student2.age);
    return 0;
}