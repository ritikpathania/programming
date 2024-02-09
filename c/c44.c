//print all the alphabets using pointer

#include <stdio.h>

void alphabet(char *ptr) {
    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }
}

int main() {
    char alpha[27];
    char *ptr = alpha;

    for (int i = 0; i < 26; i++) {
        *ptr = 'A' + i;
        ptr++;
    }

	*ptr = '\0';  // Add null terminator to mark the end of the string

    alphabet(alpha);

    return 0;
}
