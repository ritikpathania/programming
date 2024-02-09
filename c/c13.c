// for loop

#include <stdio.h>

int main() {
	for(int i=1; i<=5; i+=1) {
		printf("%d\n", i);
	}

	for(int j=5; j>=1; j-=1) {
		printf("%d\n", j);
	}

	for(int k=1; k<=5; k+=1) {
		printf("Hello World!\n");
	}
	
	for(char ch='a'; ch<='e'; ch++) {
		printf("%c\n", ch);
	}

	return 0;
} 
