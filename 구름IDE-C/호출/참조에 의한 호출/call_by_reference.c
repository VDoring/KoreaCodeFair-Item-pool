			/* call by reference 방식이란? */
/* 함수에서 값을 전달하는 대신 주소값을 전달하는 방식 */

// 사실 C언어에서의 방식은 주소값 자체를 복사해서 넘겨주는 방식이므로 call by value이다.
// 또한 이렇게 주소값을 복사해서 넘겨주는 것을 call by address 방식이라고 한다.
// C언어에서는 call by reference를 공식적으로 지원하지 않는다.
// but, 의미적, 결과적으로 call by address를 이용해서 call by reference와 같이 사용할 수 있기때문에
// 일반적으로 C언어에서 포인터를 이용해 주소값을 넘겨주는 방식을 call by reference라고 설명하는 곳도 많다.


#include <stdio.h>

void swap(int *a, int *b) { //call_by_value와 변경된점이라면.. 포인터가 사용되었다는 점!
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 10, b = 20;

	printf("swap 전 : %d %d\n", a, b);

	swap(&a, &b);

	printf("swap 후 : %d %d\n", a, b);

	return 0;
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/681035/call-by-value-and-call-by-reference