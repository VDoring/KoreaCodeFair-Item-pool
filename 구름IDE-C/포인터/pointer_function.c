#include <stdio.h>

void pointer_plus(int *num) {
	*num += 5;
}

void num_plus(int num) {
	num += 5;
}

int main() {
	int num = 15;
	printf("기존 num 값 : %d\n", num);

	num_plus(num);
	printf("num_plus 사용 후 :  %d\n", num); // 일반 변수로는 적용되지 않음 (그대로 15)

	pointer_plus(&num);
	printf("pointer_plus 사용 후 : %d\n", num); // 포인터를 사용하면 적용됨(15 + 5 = 20)

	return 0;
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/681036/%EC%B0%B8%EC%A1%B0-%EC%97%B0%EC%82%B0%EC%9E%90