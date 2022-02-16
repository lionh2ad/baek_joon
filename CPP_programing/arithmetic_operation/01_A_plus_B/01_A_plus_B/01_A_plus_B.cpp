#include"01_A_plus_B.h"

int main(void) {
	int A = 0, B = 0, result = 0;
	while (1) {
		cin >> A >> B;
		if (0<A && A<10) {
			if (0<B && B<10) {
				break;
			}
		}
	}
	result = A + B;
	cout << result << endl;
	return 0;
}