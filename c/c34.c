// sum of n natural numbers using recursion

#include <stdio.h>

int sum(int n) {
	if(n==1) {
		return 1;
	}

	int sumNminus1 = sum(n-1);
	int sumN = sumNminus1 + n;

	return sumN;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", sum(n));
	return 0;
}
