#include"07_Case_A_Plus_B.h"

int main(void) {
	int T = 0, A = 0, B = 0, count = 0;
	while (1) {
		scanf("%d", &T);
		if (0 < T) {
			break;
		}
	}
	for (count = 1; count <= T; count++) {
		while (1) {
			scanf("%d %d", &A, &B);
			if (0 < A && A < 10) {
				if (0 < B && B < 10) {
					break;
				}
			}
		}
		printf("Case #%d: %d \n",count, A + B);
	}
	return 0;
}