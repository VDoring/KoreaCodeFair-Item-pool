/* 입력한 숫자에 따라 역삼각형 별을 생성 */

#include <stdio.h>
int main() {

	int i;
	scanf("%d", &i);

	for (i; i > 0; i--) {
		for (int j = 0; j <= i-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}