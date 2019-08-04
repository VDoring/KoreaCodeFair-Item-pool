			/* call by reference ����̶�? */
/* �Լ����� ���� �����ϴ� ��� �ּҰ��� �����ϴ� ��� */

// ��� C������ ����� �ּҰ� ��ü�� �����ؼ� �Ѱ��ִ� ����̹Ƿ� call by value�̴�.
// ���� �̷��� �ּҰ��� �����ؼ� �Ѱ��ִ� ���� call by address ����̶�� �Ѵ�.
// C������ call by reference�� ���������� �������� �ʴ´�.
// but, �ǹ���, ��������� call by address�� �̿��ؼ� call by reference�� ���� ����� �� �ֱ⶧����
// �Ϲ������� C���� �����͸� �̿��� �ּҰ��� �Ѱ��ִ� ����� call by reference��� �����ϴ� ���� ����.


#include <stdio.h>

void swap(int *a, int *b) { //call_by_value�� ��������̶��.. �����Ͱ� ���Ǿ��ٴ� ��!
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 10, b = 20;

	printf("swap �� : %d %d\n", a, b);

	swap(&a, &b);

	printf("swap �� : %d %d\n", a, b);

	return 0;
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/681035/call-by-value-and-call-by-reference