#include <stdio.h>
int main() {
	int *p = 0;
	int num = 10;

	/* 1�� */
	p = &num; // p�� num�ּҰ� ����
	printf("�����Ͱ� p�� ����Ű�� �ּҰ� : %d\n", *p);  // �׳� p���� num�� �ּҰ��� ����� ����
														// p ��� *p�� ����� 10�� ���

														// p = (����)�ּҰ�
														// *p = 10

	printf("num�� �� : %d\n\n", num); // 10 ���


	/* 2�� */
	*p += 5;
	printf("�����Ͱ� p�� ����Ű�� �ּҰ� : %d\n", *p); // *p + 5 = 15
													   // 10 + 5 = 15
	printf("num�� �� : %d\n\n", num); // 10 ���


	/* 3�� */
	(*p)++; // *p�� 1�� ���� (15 + 1)
	printf("�����Ͱ� p�� ����Ű�� �ּҰ� : %d\n", *p);
	printf("num�� �� : %d\n\n", num);


	/* 4�� */
	*p++; //������ �켱������ ++�� �� ����.
		  // ++���� ���Ǽ� ����� ��� �ȵ�
	printf("�����Ͱ� p�� ����Ű�� �ּҰ� : %d\n", *p);
	printf("num�� �� : %d\n\n", num);
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/681036/%EC%B0%B8%EC%A1%B0-%EC%97%B0%EC%82%B0%EC%9E%90