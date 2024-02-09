// Function to calculate sum of digits

#include <stdio.h>

int digitSum(int num) {
	int sum = 0;

	while(num != 0) {
		sum += num % 10;
		num /= 10;
	}

	return sum;
}

int main() {
	int num;
	scanf("%d", &num);

	printf("%d\n", digitSum(num));

	return 0;
}
