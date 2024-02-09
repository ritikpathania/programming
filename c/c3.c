// Print true if both statements are true

#include <stdio.h>

int main() {
    char a, b;

    printf("Is it sunday? (y/n): ");
    scanf(" %c", &a);
    printf("Is it snowing? (y/n): ");
    scanf(" %c", &b);

    if (a == 'y' && b == 'y') {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
