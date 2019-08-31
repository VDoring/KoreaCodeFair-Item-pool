#include <stdio.h>
#include <string.h>
int main() {
	//문자 입력 -> 만약 반대로 해도 똑같을시(회문일때) -> 1 출력
			 // -> 만약 반대로 하면 말이 안될때(회문이 아닐때) -> 입력한 문자열을 반대로 한 문자를 출력

	int k;
	int arr_ascii_sum = 0;
	int reverse_arr_ascii_sum = 0;
	int Not_correct = 0; 
	char arr[120] = { 0, };
	char reverse_arr[120] = { 0, };

	scanf("%s", arr); //문자 입력
	strcpy(reverse_arr, arr); //reverse_arr애 arr의 값 저장

	k = strlen(arr); //arr의 문자길이를 k에 저장

	/* 본래는 문자의 순서를 반대로 바꾸려고 하였음. 실패했지만. */
	for (int i = k - 1; i >= 0; i--) {
		reverse_arr[i] = reverse_arr[i];
	}

	for (int i = k - 1; i >= 0; i--) {
		reverse_arr[i];
	}
	/* 여기까지 제대로 작동안됨 */

	for (int i = k - 1; i >= 0; i--) {
		arr_ascii_sum += arr[i]; //arr의 아스키아트 값을 arr_ascii_num에 모두 합함
		reverse_arr_ascii_sum += reverse_arr[i]; //reverse_arr의 아스키아트 값을 reverse_arr_ascii_sum에 모두 합함
	}

	for (int i = k - 1; i >= 0; i--) {
		if (arr[i] != reverse_arr[i]) Not_correct++; //만약 arr[i]이 reverse_arr[i]과 같지않다면(문자가 같은지 비교)
	}

	if (Not_correct == 0) {
		if (arr_ascii_sum == reverse_arr_ascii_sum) { //만약 arr의 아스키숫자 총 합계가 reverse_all_ascii_sum과 같다면
			printf("1"); //1을 출력
		}
	}
	else printf("%s%s", arr, reverse_arr); //아니라면 arr와 reverse_arr을 출력

	return 0;
}