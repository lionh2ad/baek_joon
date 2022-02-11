#include"10_star_second_step.h"

int main(void) {
	char star = '*', space = ' ';
	int N = 0, c_line = 0, c_star = 0, c_space = 0;

	while (1) {
		scanf("%d", &N);
		if (1<=N && N<=100) {
			break;
		}
	}
	for (c_line = 1;c_line<=N;c_line++) {
		for (c_space=1;c_space<= N - c_line;c_space++) {
			printf("%c", space);
		}
		for (c_star=1;c_star<=c_line;c_star++) {
			printf("%c", star);
		}
		printf("\n");
	}
	return 0;
}