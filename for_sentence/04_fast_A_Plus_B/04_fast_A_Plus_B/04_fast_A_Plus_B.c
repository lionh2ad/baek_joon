#include"04_fast_A_Plus_B.h"

int main(void) {
	int T = 0, A = 0, B = 0, count =0;
	while (1) {
		scanf("%d", &T);
		if (0<T && T<=1000000) {
			break;
		}
	}
	for (count =0;count <T;count++) {
		while (1) {
			scanf("%d %d", &A, &B);
			if (1<=A && A<=1000) {
				if (1<=B && B<=1000) {
					break;
				}
			}
		}
		printf("%d \n", A+B);
	}
	return 0;
}