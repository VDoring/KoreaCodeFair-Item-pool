#include <stdio.h>

int main() {
	int a, b;
	int temp;
	scanf("%d d", &a, &b);

	temp = a;
	a = b;
	b = temp;

	printf("%d %d", a, b);

	return 0;
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/681008/%EB%91%90-%EB%B3%80%EC%88%98%EC%9D%98-%EA%B0%92-%EB%B0%94%EA%BE%B8%EA%B8%B0