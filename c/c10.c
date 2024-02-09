// Switch statement

#include <stdio.h>
#include <string.h>

int main() {
	char day[4];

	printf("\nEnter the day: ");
	scanf("%3s", day);

	switch (day[0]) {
		case 'm' :
			if (strcmp(day, "mon") == 0) {
				printf("\nMonday\n");
			} else {
				printf("\nnot a valid day!\n");
			}
			break;
		case 't' :
			if (strcmp(day, "tue") == 0) {
				printf("\nTuesday\n");
			} else if (strcmp(day, "thu") == 0) {
				printf("\nThursday\n");
			} else {
				printf("\nnot a valid day!\n");
			}
                        break;
		case 'w' :
			if (strcmp(day, "wed") == 0) {
				printf("\nWednesday\n");
			} else {
				printf("\nnot a valid day!\n");
			}
                        break;
		case 'f' :
			if (strcmp(day, "fri") == 0) {
				printf("\nFriday\n");
			} else {
				printf("\nnot a valid day!\n");
			}
                        break;
		case 's' :
			if (strcmp(day, "sat") == 0) {
				printf("\nSaturday\n");
			} else if (strcmp(day, "sun") == 0) {
				printf("\nSunday\n");
			} else {
				printf("\nnot a valid day!\n");
			}
                        break;
		default : printf("\nnot a valid day!\n");
		}

	return 0;
}
