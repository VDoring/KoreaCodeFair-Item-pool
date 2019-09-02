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

	scanf("%s", arr);

	strcpy(reverse_arr, arr);
	reverseString(arr);
	k = strlen(arr);

	//for문 돌려서 모든 아스키코드값을 더함
	for (int i = k - 1; i >= 0; i--) {
		arr_ascii_sum += arr[i];
		reverse_arr_ascii_sum += reverse_arr[i];
	}

	for (int i = k - 1; i >= 0; i--) {
		if (arr[i] != reverse_arr[i]) Not_correct++;
	}

	if (Not_correct == 0) {
		if (arr_ascii_sum == reverse_arr_ascii_sum) {
			printf("1");
		}
	}
	else printf("%s%s", arr, reverse_arr);

	return 0;
}

void reverseString(char* s) {
	size_t size = strlen(s);
	char temp;

	for (size_t i = 0; i < size / 2; i++) {
		temp = s[i];
		s[i] = s[(size - 1) - i];
		s[(size - 1) - i] = temp;
	}
}