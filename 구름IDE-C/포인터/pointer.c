#include <stdio.h>
int main() {
	int *p = NULL;
	int num = 15;

	p = &num;

	printf("int ���� num �ּ� : %d\n", &num);
	printf("������ p �� : %d\n", p);

	printf("������ p�� ����Ű�� ��(�ּҰ�) : %d\n", *p);

	return 0;
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/681032/%ED%8F%AC%EC%9D%B8%ED%84%B0%EB%9E%80