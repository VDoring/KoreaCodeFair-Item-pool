#include <stdio.h>
#include <string.h>
int main() {
	//���� �Է� -> ���� �ݴ�� �ص� �Ȱ�����(ȸ���϶�) -> 1 ���
			 // -> ���� �ݴ�� �ϸ� ���� �ȵɶ�(ȸ���� �ƴҶ�) -> �Է��� ���ڿ��� �ݴ�� �� ���ڸ� ���

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

	//for�� ������ ��� �ƽ�Ű�ڵ尪�� ����
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