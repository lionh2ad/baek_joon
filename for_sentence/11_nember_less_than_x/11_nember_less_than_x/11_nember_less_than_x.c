#include"11_nember_less_than_x.h"

int main(void) {
	int X = 0, N = 0, count=0, input_A=0;
	int A[10000] = { 0, };

	while (1) {
		scanf("%d %d", &N, &X);
		if (1<=N && N<=10000) {
			if (1<=X && X<=10000) {
				break;
			}
		}
	}
	
	for (count=0;count<N;count++) {
		while (1) {
			scanf("%d", &input_A);
			if (1<=input_A && input_A<=10000) {
				break;
			}
		}
		A[count] = input_A;
	}
	for (count = 0;count<N;count++) {
		if (A[count]<X) {
			printf("%d ", A[count]);
		}
	}

	return 0;
}