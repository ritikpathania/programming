// function to calculate percentage of a student

#include <stdio.h>

int calculatePercent(int a, int b, int c) {
	return ((a+b+c)/3);
}

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", calculatePercent(a, b, c));

	return 0;
}
