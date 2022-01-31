#include"01_A_Plus_B.h"

int main(void) {
	int A = 0, B = 0;
	while (1) {
		while (1) {
			scanf("%d %d", &A, &B);
			if (0<=A&&A<=10) {
				if (0<=B&&B<=10) {
					break;
				}
			}
		}
		if (A==0&&B==0) {
			break;
		}
		printf("%d \n", A+B);
	}
	return 0;
}