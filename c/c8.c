// Ternary Operator

#include <stdio.h>

int main() {
    int age;
    
    printf("\nEnter the age: ");
    scanf("%d", &age);

    age>=18 ? printf("\nAdult\n") : printf("Not Adult\n");

    return 0;
}
