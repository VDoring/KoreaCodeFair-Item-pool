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

	scanf("%s", arr); //���� �Է�
	strcpy(reverse_arr, arr); //reverse_arr�� arr�� �� ����

	k = strlen(arr); //arr�� ���ڱ��̸� k�� ����

	/* ������ ������ ������ �ݴ�� �ٲٷ��� �Ͽ���. ����������. */
	for (int i = k - 1; i >= 0; i--) {
		reverse_arr[i] = reverse_arr[i];
	}

	for (int i = k - 1; i >= 0; i--) {
		reverse_arr[i];
	}
	/* ������� ����� �۵��ȵ� */

	for (int i = k - 1; i >= 0; i--) {
		arr_ascii_sum += arr[i]; //arr�� �ƽ�Ű��Ʈ ���� arr_ascii_num�� ��� ����
		reverse_arr_ascii_sum += reverse_arr[i]; //reverse_arr�� �ƽ�Ű��Ʈ ���� reverse_arr_ascii_sum�� ��� ����
	}

	for (int i = k - 1; i >= 0; i--) {
		if (arr[i] != reverse_arr[i]) Not_correct++; //���� arr[i]�� reverse_arr[i]�� �����ʴٸ�(���ڰ� ������ ��)
	}

	if (Not_correct == 0) {
		if (arr_ascii_sum == reverse_arr_ascii_sum) { //���� arr�� �ƽ�Ű���� �� �հ谡 reverse_all_ascii_sum�� ���ٸ�
			printf("1"); //1�� ���
		}
	}
	else printf("%s%s", arr, reverse_arr); //�ƴ϶�� arr�� reverse_arr�� ���

	return 0;
}