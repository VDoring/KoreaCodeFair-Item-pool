#include <stdio.h>
int main() {
	unsigned char input; //�Է��ϴ� ��
	unsigned char num = 6; //���� ��

	scanf("%hhu", &input); //���� �Է�


	unsigned char sum = input & num; //AND����
	printf("%hhu ", sum);


	sum = input | num; //OR����
	printf("%hhu ", sum);


	sum = input ^ num; //XOR����
	printf("%hhu ", sum);


	unsigned char Not_num1 = ~input;
	printf("%hhu", Not_num1);

	return 0;
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/681023/%EB%B9%84%ED%8A%B8-%EC%97%B0%EC%82%B0%EC%9E%90