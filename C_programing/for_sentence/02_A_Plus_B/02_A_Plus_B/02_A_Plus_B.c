#include"02_A_Plus_B.h"

int main(void) {
	int A = 0, B = 0, T = 0, count=0;
	while (1) {
		scanf("%d", &T);
		if (0<T) {
			break;
		}
	}
	for (count=0;count<T;count++) {
		while (1) {
			scanf("%d %d", &A, &B);
			if (0 < A && A < 10) {
				if (0 < B && B < 10) {
					break;
				}
			}
		}
		printf("%d \n", A + B);
	}
	return 0;
}