/* �Է��� ���ڿ� ���� ���ﰢ�� ���� ���� */

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