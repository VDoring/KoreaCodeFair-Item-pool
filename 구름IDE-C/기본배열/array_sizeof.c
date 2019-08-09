#include <stdio.h>
int main() {
	int arr[] = { 1000, 30, 59, 1457963, 100, 150 };

	printf("%ld\n", sizeof(arr));
	// 4바이트(int)가 6개 있음
	//4 x 6 = 24

	printf("%ld\n", sizeof(arr) / sizeof(arr[0]));
	// 배열 전체는 총 24바이트(4 x 6)
	// 배열 한개는 4바이트
	// 24 / 4 = 6

	return 0;
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/680950/%EB%B0%B0%EC%97%B4%EC%9D%98-%EA%B0%AF%EC%88%98-%EA%B5%AC%ED%95%98%EA%B8%B0