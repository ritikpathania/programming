// recursion

#include <stdio.h>

void printText(int count) {
	if(count == 0) {
		return;
	}

	printf("Hello World!\n");
	printText(count-1);
}

int main() {
	int count;
	scanf("%d", &count);
	printText(count);
	return 0;
}
