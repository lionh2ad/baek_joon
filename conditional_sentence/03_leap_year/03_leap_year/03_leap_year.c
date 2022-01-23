#include"03_leap_year.h"

int main(void) {
	int year = 0, leap_year=1, n_leap_year=0;
	while (1) {
		scanf("%d", &year);
		if (0<=year&&year<=4000) {
			break;
		}
	}
	if (year%4 == 0 && year%100 != 0) {
		printf("%d", leap_year);
	}
	else if (year % 4 == 0 && year % 400 == 0) {
		printf("%d", leap_year);
	}
	else {
		printf("%d", n_leap_year);
	}
	return 0;
}