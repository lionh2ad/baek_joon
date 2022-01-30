#include"05_printf_n.h"

int main(void) {
	int N = 0, count =0;
	while (1) {
		scanf("%d", &N);
		if (0<=N && N<=100000) {
			break;
		}
	}
	for (count=1;count<=N;count++) {
		printf("%d \n", count);
	}
	return 0;
}