#include <stdio.h>

int main() {

	int arr[10] = { 5, 10, 15, 22, 23, 102, 99, 102, 130, 8 };
	int odd = 0;
	int even = 0;

	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) even++;
		if (arr[i] % 2 == 1) odd++;
	}

	printf("Ȧ���� ������ %d�� �Դϴ�.\n", odd);
	printf("¦���� ������ %d�� �Դϴ�.\n", even);

	return 0;
}

// �迭�� ���� �������� ¦�� Ȧ�� ������ ���� ��ִ��� ���
// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/681007/%EB%B0%B0%EC%97%B4%EC%9D%98-%ED%99%80%EC%A7%9D-%ED%8C%90%EB%B3%84