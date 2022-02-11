#include"04_Remainder.h"

int main(void) {
	run();
	return 0;
}

void run() {
	int* ten_num;
	int* remaind_ten_num;
	int count_remaind = 0;
	
	ten_num = ten_scan();
	remaind_ten_num = remainder_number(ten_num);
	count_remaind = check_remaind_num(remaind_ten_num);
	printf("%d",count_remaind);
}

int* ten_scan() {
	int* ten_num = (int*)malloc(sizeof(int) * 10);
	int count = 0, s_num = 0;
	while (count < 10) {
		while (1) {
			scanf("%d", &s_num);
			if (0<s_num && s_num<=1000) {
				break;
			}
		}
		ten_num[count] = s_num;
		count++;
	}
	return ten_num;
}

int* remainder_number(int* ten_num) {
	int* remaind_ten_num = (int*)malloc(sizeof(int) * 10);
	int count = 0;
	while (count<10) {
		remaind_ten_num[count] = ten_num[count] % REMAIND_NUM;
		count++;
	}
	return remaind_ten_num;
}

int check_remaind_num(int* remaind_ten_num) {
	int count = 0, count_check = 0, check_num=0;
	int count_remaind = 0;
	while (count < 10) {
		count_check = count + 1;
		while (count_check < 10) {
			if (remaind_ten_num[count] == -1) {
				break;
			}else if (remaind_ten_num[count] == remaind_ten_num[count_check]) {
				remaind_ten_num[count_check] = -1;
			}
			count_check++;
		}
		count++;
	}
	count = 0;
	while (count < 10) {
		if (remaind_ten_num[count] != -1) {
			count_remaind++;
		}
		count++;
	}
	return count_remaind;
}