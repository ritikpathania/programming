// take numbers as input until multiple of 7 is entered is entered

#include <stdio.h>

int main() {
	int n;

	do {
		scanf("%d", &n);

		if(n%7 == 0) {
			break;
		}
	} while(1);

	printf("end");
	return 0;
}
