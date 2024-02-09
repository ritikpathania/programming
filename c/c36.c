// function for converting celcius into farenhiet

#include <stdio.h>

float convertTemp(float celcius) {
	float faren = celcius * (9.0/5.0) + 32;
	return faren;
}

int main() {
	float celcius;
	scanf("%f", &celcius);

	printf("%f\n", convertTemp(celcius));

	return 0;
}
