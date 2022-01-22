#include"07_three_digits_multiply.h"

int main(void) {
	int a=0, b=0;
	int r_a = 0, r_b = 0, r_c = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	r_a = a * (b % 10);
	r_b = a * ((b / 10) % 10);
	r_c = a * ((b / 100) % 10);
	printf("%d \n", r_a);
	printf("%d \n", r_b);
	printf("%d \n", r_c);
	printf("%d", r_a+(r_b*10)+(r_c*100));

	return 0;
}