// check if a character is lowercase or uppercase

#include <stdio.h>

int main() {
	char ch;
	printf("\nEnter a character: ");
	scanf("%c", &ch);

	if(ch >= 'A' && ch <= 'Z') {
		printf("Upper Case\n");
	} else if(ch >= 'a' && ch <= 'z') {
                printf("Lower Case\n");
	} else {
		printf("Not an english letter\n");
	}

	return 0;
}
