#include"01_Maximum_Minimum.h"

int main(void) {
	int N = 0, count =0, s_n = 0, max_n=0, min_n=0;
	int one_d[1000000] = { 0, };

	while (1) {
		scanf("%d", &N);
		if (1<=N && N<=1000000) {
			break;
		}
	}
	for (count =0; count < N;count++) {
		while (1) {
			scanf("%d", &s_n);
			if (-1000000<=s_n && s_n<=1000000) {
				break;
			}
		}
		one_d[count] = s_n;
	}
	max_n = one_d[0];
	min_n = one_d[0];
	for (count=0;count<N-1;count++) {
		if (max_n < one_d[count + 1]) {
			max_n = one_d[count + 1];
		}else if (min_n > one_d[count + 1]) {
			min_n = one_d[count + 1];
		}
	}
	printf("%d %d", min_n, max_n);
	return 0;
}