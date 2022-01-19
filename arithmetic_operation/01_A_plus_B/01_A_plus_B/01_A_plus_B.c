#include"01_A_plus_B.h"

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
	return 0;
}
/*
int main(void) {
	int A = 0, B = 0;
	while(1){
		printf("A와 B를 입력하시오. \n");
		printf("단, (0<A,B<10) \n");
		scanf("%d %d", &A, &B);
		if (0<A && A<10) {
			if (0<B && B<10) {
				break;
			}
		}
	}
	printf("A+B = ");
	printf("%d \n", A+B);
	
	return 0;
}
*/