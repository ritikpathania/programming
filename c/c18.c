// sum of first n natural numbers
// print them in reverse

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int sum=0;
	for(int i=1, j=n; i<=n && j>=1; i++, j--) {
		sum += i;
		printf("%d\n", j);
	}

	printf("%d\n", sum);

	return 0;
}
