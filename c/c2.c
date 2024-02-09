// Check if a number is odd or even

#include <stdio.h>

int main() {
	int a;
	printf("\nEnter a number: ");
	scanf("%d", &a);

	if(a%2==0) {
		printf("\n%d is even", a);
	}
	else {
		printf("\n%d is odd", a);
	}
	return 0;
}
