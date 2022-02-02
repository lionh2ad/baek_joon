#include"02_A_Plus_B_second.h"

int main(){
	int A, B;
	while (scanf("%d %d", &A, &B) != EOF)
	{
		if (0 < A < 10 && 0 < B < 10){
			printf("%d\n", A+B);
		}
		else
			break;
	}
	return 0;
}