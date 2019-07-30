/* 구름IDE 중간점검 10번 문제 */

#include <stdio.h>

int main()
{
	int i, sum = 0;
	int arr[5] = { 50, 100, 150, 50, 100 };
	int length = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < length - 1; i++) {
		sum += arr[i] < arr[i + 1];
	}
	printf("%d", sum);

	return 0;
}
