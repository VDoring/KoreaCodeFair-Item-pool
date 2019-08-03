#include <stdio.h>
int main() {
	int input, num = 0;
	int count = 0, first_count = 0;
	scanf("%d", &input);
	for (input; input > 0; input--) {
		if (first_count == 0) {
			num += input;
			first_count = 99;
		}
		if (count == 1) {
			num *= input;
		}
		if (count == 0) {
			count++;
		}
	}
	printf("%d", num);
}

/*
#include <stdio.h>
int main() {
	int num;
	int result = 1;

	printf("정수를 입력하세요\n");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		result *= i;
	}
	printf("%d! = %d \n", num, result);
	return 0;
}
*/