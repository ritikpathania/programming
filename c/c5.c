// Print the average of three numbers

#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("\nEnter the first number: ");
    scanf("%d", &a);
    printf("\nEnter the second number: ");
    scanf("%d", &b);
    printf("\nEnter the third number: ");
    scanf("%d", &c);
    
    printf("\nAverage of three numbers = %d ", (a+b+c)/3); 

    return 0;
}
