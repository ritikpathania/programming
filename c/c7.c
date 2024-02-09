// Find the smallest of three elements

#include <stdio.h>

int main() {
	int a = 5, b = 7, c = 10;

	if (a <= b && a <= c)
		printf("%d is the smallest",a);

	else if (b <= a && b <= c)
		printf("%d is the smallest",b);

	else
		printf("%d is the smallest",c);

	return 0;
}
