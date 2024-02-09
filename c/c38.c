// fibonacci sequence nth term

#include <stdio.h>

int fib(int n) {
	if(n==0) {
		return 0;
	}
	if(n==1) {
		return 1;
	}

	int fibNminus1 = fib(n-1);
	int fibNminus2 = fib(n-2);
	int fibN = fibNminus1 + fibNminus2;

	return fibN;
}

int main() {
	int n;
	scanf("%d", &n);

	printf("%d\n", fib(n));

	return 0;
}
