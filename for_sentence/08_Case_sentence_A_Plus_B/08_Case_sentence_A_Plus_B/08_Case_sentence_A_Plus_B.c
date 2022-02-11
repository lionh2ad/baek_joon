#include"08_Case_sentence_A_Plus_B.h"

int main(void) {
	int T = 0, A = 0, B = 0, C=0, count = 0;
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
		C = A + B;
		printf("Case #%d: %d + %d = %d \n", count, A, B, C);
	}
	return 0;
}