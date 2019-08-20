/* 질문 */

/*
#include <stdio.h>
int main(void) {
	int x;
	int i;
	int j;

	scanf("%d", &x);

	for (i = x; i <= 0; i--) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
*/


/* 나의 코드 수정안(답변) */
#include <stdio.h>

int main(void) {
	int x;
	int i;
	int j;

	scanf("%d", &x);

	for (i = x; i >= 0; i--) { // 처음에 i <= 0이라고 적어서 작동이 되지 않았음
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/qna/3328