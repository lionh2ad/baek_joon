#include"02_A_Plus_B_second.h"

int main(void) {
	int A = 0, B = 0;
	while (1) {
		while (scanf("%d %d", &A, &B) != EOF) {
			if (0<A && A<10) {
				if (0<B&&B<10) {
					break;
				}
			}
		}
		printf("%d \n", A+B);
	}
	return 0;
}