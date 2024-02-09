// increment and decrement operator
// ++i = pre increment
// i++ = post increment

#include <stdio.h>

int main() {
	int i = 1;
	printf("%d\n", i++); //use, then increase
	printf("%d\n", i);

	printf("%d\n", ++i); //increase, then use 
        printf("%d\n", i);
	
	printf("%d\n", i--); //use, then decrease
        printf("%d\n", i);

        printf("%d\n", --i); //decrease, then use 
        printf("%d\n", i);	

	return 0;
} 
