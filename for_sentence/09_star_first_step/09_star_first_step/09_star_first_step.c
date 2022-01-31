#include"09_star_first_step.h"

int main(void) {
	char star = '*';
	int count_line =0, count_star = 0, N=0;
	while (1) {
		scanf("%d", &N);
		if (1<=N && N<=100) {
			break;
		}
	}
	for (count_line=0;count_line<N;count_line++) {
		for (count_star=0;count_star<=count_line;count_star++) {
			printf("%c", star);
		}
		printf("\n");
	}
	return 0;
}