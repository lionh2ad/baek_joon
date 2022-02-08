#include"03_count_number.h"

int main(void) {
	run();
	return 0;
}

void run() {
	int multi_number = 0, digits = 0, count_multinumber = 0;
	int* count_number;
	multi_number = input_multi_number();
	digits = number_of_digits(multi_number);
	count_number = count_number_of_digits(multi_number, digits);
	for (count_multinumber = 0; count_multinumber < 10; count_multinumber++) {
		printf("%d\n", count_number[count_multinumber]);
	}
}

int input_multi_number() {
	int A = 0, B = 0, C = 0;
	int multi_number = 0;
	while (1) {
		scanf("%d %d %d", &A, &B, &C); {
			if (100 <= A && A < 1000) {
				if (100 <= B && B < 1000) {
					if (100 <= C && C < 1000) {
						break;
					}
				}
			}
		}
	}
	multi_number = A * B * C;
	return multi_number;
}

int number_of_digits(int multi_number) {
	int digits = 7;
	multi_number = multi_number / 1000000;
	if (0 < multi_number && multi_number < 10) {
		digits = 7;
	}
	else if (10 <= multi_number && multi_number < 100) {
		digits = 8;
	}
	else if (100 <= multi_number && multi_number < 1000) {
		digits = 9;
	}
	return digits;
}

int* count_number_of_digits(int multi_number, int digits) {
	int* count_number = (int*)malloc(sizeof(int*) * 10);
	int divide = 1, divide_number = 0, count_digits = 0, count_divide = 0;
	int count_multi_number = 0;
	for (int i = 0; i < 10; i++) {
		count_number[i] = 0;
	}
	for (count_digits = digits; count_digits > 0; count_digits--) {
		divide = 1;
		for (count_divide = 0; count_divide < count_digits - 1; count_divide++) {
			divide = divide * 10;
		}
		divide_number = (int)multi_number / divide;
		multi_number = multi_number - divide_number * divide;
		for (count_multi_number = 0; count_multi_number < 10; count_multi_number++) {
			if (count_multi_number == divide_number) {
				count_number[divide_number] = count_number[divide_number]++;
			}
		}
	}
	return count_number;
}