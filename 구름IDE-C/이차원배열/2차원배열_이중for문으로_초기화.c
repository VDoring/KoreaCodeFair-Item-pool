#include <stdio.h>

int main() {
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/681011/%EC%9D%B4%EC%B0%A8%EC%9B%90-%EB%B0%B0%EC%97%B4-%EB%A7%8C%EB%93%A4%EA%B8%B0