#include"03_count_number.h"

int main(void) {
	run();
	return 0;
}

void run() {
	int multi_number = 0, digits  = 0;
	int* count_number[10] = {0,};
	multi_number = input_multi_number();
	digits = number_of_digits(multi_number);
	for (int i=0;i<10;i++) {
		printf("%d : %d\n",i, count_number[i]);
	}
}

int input_multi_number() {
	int A = 0, B = 0, C = 0;
	int multi_number = 0;
	while (1) {
		scanf("%d %d %d", &A, &B, &C) {
			if (100<=A && A<1000) {
				if (100<=B && B<1000) {
					if (100<=C && C<1000) {
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
	if (0<=multi_number && multi_number<10) {
		digits = 7;
	}else if (10<= multi_number && multi_number<100) {
		digits = 8;
	}else if (100<multi_number && multi_number<1000) {
		digits = 9;
	}
	return digits;
}

int* count_number_of_digits(int count_number[], int digits) {

	return count_number;
}