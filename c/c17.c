// sum of first n natural numbers

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int sum=0;
	for(int i=1; i<=n; i++) {
		sum += i;
	}

	printf("%d\n", sum);

// print them in reverse

	for(int i=n; i>=1; i--) {
		printf("%d\n", i);
	}

	return 0;
}
