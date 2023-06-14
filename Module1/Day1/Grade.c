#include<stdio.h>
int main(){
    int Marks;
    printf("\nEnter the Marks:");
    scanf("%d",&Marks);
    if (Marks>= 90&&Marks<= 100) {
        printf("\nGrade A");
    }
    else if (Marks>= 75&&Marks<= 89) {
        printf("\nGrade B");
    }
    else if (Marks>= 60&&Marks <= 74) {
        printf("\nGrade C");
    }
    else if (Marks>= 50&&Marks<= 59) {
        printf("\nGrade D");
    }
    else if (Marks>=0&&Marks<= 49) {
        printf("\nGrade F");
    }
    else {
        printf("\nInvalid Marks");
    }
    return 0;
}