// Check if a number is divisible by 2 or not

#include <stdio.h>

int main() {
	int a;
	printf("\nEnter the number: ");
	scanf("%d", &a);

	if(a%2==0) {
		printf("\n%d is divisible by 2", a);
	}
	else {
		printf("\nNot Divisible!\n");
	}
	return 0;
}
