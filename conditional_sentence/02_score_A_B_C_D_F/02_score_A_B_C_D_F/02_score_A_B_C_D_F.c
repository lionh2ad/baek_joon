#include"02_score_A_B_C_D_F.h"

int main(void) {
	int a = 0;
	while (1) {
		scanf("%d", &a);
		if(0<=a<=100){
			break;
		}
	}
	if (90<=a && a<=100) {
		printf("A");
	}else if (80 <=a && a<=89) {
		printf("B");
	}else if (70<=a&&a<=79) {
		printf("C");
	}else if (60<=a&&a<=69) {
		printf("D");
	}else {
		printf("F");
	}

	return 0;
}