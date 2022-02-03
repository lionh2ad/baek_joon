#include"03_plus_cycle.h"

int main(void) {
	int first_N = 0, f_o_N = 0,f_t_n=0, count = 0;
	int N = 0, one_N = 0, ten_N = 0;
	while (1) {
		while (1) {
			scanf("%d", &first_N);
			if (0 <= first_N && first_N <= 99) {
				break;
			}
		}
		f_o_N = first_N % 10;
		f_t_n = (first_N / 10) % 10;
		if (f_o_N+f_t_n>=10) {
			N = f_o_N * 10 + (f_o_N + f_t_n) % 10;
		}else {
			N = f_o_N * 10 + (f_o_N + f_t_n);
		}
		for (count = 1; first_N != N;count++) {
			one_N = N % 10;
			ten_N = (N / 10) % 10;
			if (N >= 10) {
				N = one_N * 10 + (one_N + ten_N)%10;
			}else {
				N = one_N * 10 + (one_N + ten_N);
			}
		}
		printf("%d", count);
		break;
	}
	return 0;
}