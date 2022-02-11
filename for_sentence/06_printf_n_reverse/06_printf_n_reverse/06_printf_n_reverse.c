#include"06_printf_n_reverse.h"

int main(void) {
	int N = 0, count = 0;
	while (1) {
		scanf("%d", &N);
		if (0 <= N && N <= 100000) {
			break;
		}
	}
	for (count = N; count > 0; count--) {
		printf("%d \n", count);
	}
	return 0;
}