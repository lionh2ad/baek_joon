#include"03_N_Plus.h"

int main(void) {
	int n = 0, count=0, result=0;
	while (1) {
		scanf("%d", &n);
		if (1<=n&&n<=10000) {
			break;
		}
	}
	for (count=1;count<=n;count++) {
		result = result + count;
	}
	printf("%d", result);
	return 0;
}