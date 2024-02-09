// Check whether digit or not

#include <stdio.h>

int main() {
    char ch;
    printf("\nEnter a character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("\nThe character entered is a digit.\n");
    } else {
        printf("\nThe character entered is not a digit.\n");
    }

    return 0;
}
