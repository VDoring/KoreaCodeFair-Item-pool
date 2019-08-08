#include <stdio.h>
int main() {
	int *p = 0;
	int num = 10;

	/* 1번 */
	p = &num; // p에 num주소값 저장
	printf("포인터가 p가 가리키는 주소값 : %d\n", *p);  // 그냥 p에는 num의 주소값이 저장되 있음
														// p 대신 *p를 사용해 10을 출력

														// p = (랜덤)주소값
														// *p = 10

	printf("num의 값 : %d\n\n", num); // 10 출력


	/* 2번 */
	*p += 5;
	printf("포인터가 p가 가리키는 주소값 : %d\n", *p); // *p + 5 = 15
													   // 10 + 5 = 15
	printf("num의 값 : %d\n\n", num); // 10 출력


	/* 3번 */
	(*p)++; // *p에 1을 더함 (15 + 1)
	printf("포인터가 p가 가리키는 주소값 : %d\n", *p);
	printf("num의 값 : %d\n\n", num);


	/* 4번 */
	*p++; //연산자 우선순위가 ++가 더 높음.
		  // ++먼저 계산되서 제대로 계산 안됨
	printf("포인터가 p가 가리키는 주소값 : %d\n", *p);
	printf("num의 값 : %d\n\n", num);
}

// https://koreacodefair.kr/learn/lecture/14776/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/681036/%EC%B0%B8%EC%A1%B0-%EC%97%B0%EC%82%B0%EC%9E%90