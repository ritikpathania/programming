// calculate the sum of all the numbers between 5 and 50
// including 5 and 50

#include <stdio.h>

int main() {
	int sum=0;

	for(int i=5; i<=50; i++) {
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}
