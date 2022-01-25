#include"05_time.h"

int main(void) {
	int H = 0, M = 0;
	while (1) {
		scanf("%d %d", &H, &M);
		if (0<=H && H<=23) {
			if (0<=M && M<=59) {
				break;
			}
		}
	}
	if (M >= 45 && H !=0) {
		M = M - 45;
	}else if (M >= 45 && H == 0) {
		M = M - 45;
	}else if (M < 45 && H != 0) {
		H = H - 1;
		M = M + 15;
	}else if (M < 45 && H == 0) {
		H = 23;
		M = M + 15;
	}
	printf("%d %d", H, M);
	return 0;
}