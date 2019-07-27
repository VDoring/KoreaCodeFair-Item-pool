#include <stdio.h>
int main() {
	char arr[3][20];

	printf("이차원 배열 문자열 입력\n");
	for (int i = 0; i < 3; i++) {
		printf("20자 이내의 문자열을 입력하세요 : ");
		scanf("%s", arr[i]);
	}

	printf("\n이차원 배열 문자열 출력\n");
	for (int i = 0; i < 3; i++) {
		printf("%s\n", arr[i]);
	}
	return 0;
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/681001/%EC%9D%B4%EC%B0%A8%EC%9B%90-%EB%B0%B0%EC%97%B4-%EC%9E%85%EB%A0%A5%EA%B3%BC-%EC%B6%9C%EB%A0%A5