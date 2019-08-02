/*첫번째 시도 (문제에서 재시하는 입출력과 맞지않아 오답 */

/*
#include <stdio.h>

int main() {
	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("입력 [%d] : ", i);
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < 5; j++) {
		sum += arr[j];
	}
	printf("모두 더한 결과 : %d", sum);

	return 0;
}
*/


#include <stdio.h>

int main() {
	int arr[5];
	int sum = 0;
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	for (int j = 0; j < 5; j++) {
		sum += arr[j];
	}
	printf("%d", sum);

	return 0;
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/680951/%EC%9D%BC%EC%B0%A8%EC%9B%90-%EB%B0%B0%EC%97%B4-%EB%A7%8C%EB%93%A4%EA%B8%B0