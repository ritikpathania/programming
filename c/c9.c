// Switch statement

#include <stdio.h>

int main() {
	int day;

	printf("\nEnter the day: ");
	scanf("%d", &day);

	switch (day) {
		case 1 : printf("\nMonday\n");
			break;
		case 2 : printf("\nTuesday\n");
                        break;
		case 3 : printf("\nWednesday\n");
                        break;
		case 4 : printf("\nThursday\n");
                        break;
		case 5 : printf("\nFriday\n");
                        break;
		case 6 : printf("\nSaturday\n");
                        break;
		case 7 : printf("\nSunday\n");
                        break;
		default : printf("\nnot a valid day!\n");
		}

	return 0;
}
