#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)
#define REMAIND_NUM 42

void run();
int* ten_scan();
int* remainder_number(int* ten_number);
int check_remaind_num(int* remaind_ten_num);

/*
�� �ڿ��� A�� B�� ���� ��, A%B�� A�� B�� ���� ������ �̴�. 
���� ���, 7, 14, 27, 38�� 3���� ���� �������� 1, 2, 0, 2�̴�.

�� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. 
�� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/