// factorial of n natural numbers using recursion

#include <stdio.h>

int fact(int n) {
	if(n==0) {
		return 1;
	}

	int factNminus1 = fact(n-1);
	int factN = factNminus1 * n;

	return factN;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", fact(n));
	return 0;
}
