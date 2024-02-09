// take numbers as input until odd number is entered

#include <stdio.h>

int main() {
	int n;

	do {
		scanf("%d", &n);

		if(n%2 != 0) {
			break;
		}
	} while(1);

	printf("end");
	return 0;
}
