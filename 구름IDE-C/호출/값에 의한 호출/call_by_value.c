#include <stdio.h>

void swap(int a, int b) {
	int temp;

	temp = a; //temp는 a가 된다
	a = b;    //a는 b가 된다
	b = temp; //b는 temp가 된다

	/* [작동예시]
	a = 1, b = 2라면
	temp = 1
	a = 2
	b = 1

	결과 a = 2, b = 1;
	*/
}

int main() {
	int a, b;

	a = 10;
	b = 20;

	printf("swap 전 : %d %d\n", a, b);

	swap(a, b);

	printf("swap 후 : %d %d\n", a, b); //call by value 형식으로는 swap을 해도 매개변수만 바뀔 뿐 원래 변수인 a, b의 값은 변하지 않음!

	return 0;
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/681035/call-by-value-and-call-by-reference