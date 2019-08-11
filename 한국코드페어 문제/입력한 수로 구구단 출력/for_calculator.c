#include <stdio.h>

int main() {
	int input;
	int result;

	scanf("%d", &input);

	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", input, i, result = input * i);
	}

	return 0;
}