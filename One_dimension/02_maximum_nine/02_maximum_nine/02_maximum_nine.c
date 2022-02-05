#include"02_maximum_nine.h"

int main(void) {
	int s_num = 0, max_num = 0;
	int s_count = 0, count = 0;
	int nine_arr[9] = { 0, };
	for (s_count = 0 ; s_count < 9 ;s_count++) {
		while (1) {
			scanf("%d", &s_num);
			if (0<s_num && s_num < 100) {
				break;
			}
		}
		nine_arr[s_count] = s_num;
	}
	max_num = maximum(nine_arr);
	count = count_maximum(nine_arr, max_num);
	printf("%d \n%d \n", max_num, count);

	return 0;
}

int maximum(int arr[]) {
	int count = 0, max_num = 0;
	for (count=0; count < 9 ;count++) {
		if (max_num < arr[count]) {
			max_num = arr[count];
		}
	}
	return max_num;
}

int count_maximum(int arr[], int max_num) {
	int count = 0;
	while (1) {
		if (arr[count] == max_num) {
			break;
		}
		count++;
	}
	count++;
	return count;
}