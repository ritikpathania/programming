// functions to print table

#include <stdio.h>

void printTable(int n) {
	for(int i=1; i<=10; i++) {
		printf("%d x %d = %d\n",n, i, n*i);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	printTable(n);

	return 0;
}

