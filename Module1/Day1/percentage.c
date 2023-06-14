#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float phy, math, che;
    float totalMarks, per;
    printf("\nEnter Roll No: ");
    scanf("%d",&rollNo);
    printf("\nEnter Name: ");
    scanf(" %s",&name);
    printf("\nEnter Physics Marks: ");
    scanf("%f",&phy);
    printf("\nEnter Maths Marks: ");
    scanf("%f",&math);
    printf("\nEnter Chemistry Marks: ");
    scanf("%f",&che);
    totalMarks = phy + math + che;
    per = (totalMarks / 300) * 100;
    printf("\n");
    printf("\nRoll No: %d", rollNo);
    printf("\nName: %s", name);
    printf("\nPhysics Marks: %.2f", phy);
    printf("\nMath Marks: %.2f", math);
    printf("\nChemistry Marks: %.2f", che);
    printf("\nTotal Marks: %.2f", totalMarks);
    printf("\nPercentage: %.2f", per);
    
    return 0;
}
