// Print true even if one statement is true

#include <stdio.h>

int main() {
    int a, b;

    printf("Is it monday? (0/1): ");
    scanf("%d", &a);
    printf("Is it raining? (0/1): ");
    scanf("%d", &b);

    if (a || b) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
