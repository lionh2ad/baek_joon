#include"01_multiplication_table.h"

int main(void) {
	int N = 0, multiple_first=0;
	while (1) {
		scanf("%d", &N);
		if (1<=N && N<=9) {
			break;
		}
	}
	for (multiple_first = 1;multiple_first<10;multiple_first++) {
		printf("%d * %d = %d \n", N, multiple_first, N*multiple_first);
	}
	return 0;
}