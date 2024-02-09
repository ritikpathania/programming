// find max number b/w 2 numbers

#include <stdio.h>

int max(int *ptr1, int *ptr2) {
    if (*ptr1 > *ptr2) {
        return *ptr1;
    } else {
        return *ptr2;
    }
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", max(&num1, &num2));
    return 0;
}
