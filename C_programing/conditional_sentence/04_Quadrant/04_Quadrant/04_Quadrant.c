#include"04_Quadrant.h"

int main(void) {
	int x = 0, y = 0;
	int quadrant_1 = 1, quadrant_2 = 2, quadrant_3 = 3, quadrant_4 = 4;
	scanf("%d", &x);
	scanf("%d", &y);
	while(1){
		if (x!=0 && y !=0) {
			if (-1000<=x && x<=1000) {
				if (-1000 <= y && y <= 1000) {
					break;
				}
			}
		}
	}
	if (x > 0 && y > 0) {
		printf("%d", quadrant_1);
	}else if (x < 0 && y > 0) {
		printf("%d", quadrant_2);
	}else if (x < 0 && y < 0) {
		printf("%d", quadrant_3);
	}else if (x > 0 && y < 0){
		printf("%d", quadrant_4);
	}
	return 0;
}