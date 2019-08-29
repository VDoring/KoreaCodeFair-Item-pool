/* 숫자 게임 */

// 영희와 철수는 n개의 숫자 카드를 가지고 놀고 있다. 같은 숫자가 적힌 카드는 두개 이상 존재하지 않는다.
//철수가 1부터 n사이의 숫자 k를 말하면, 영희는 n개의 카드 중에서 k번째로 큰 카드의 숫자를 말하는 게임이다.
//예를 들어, 5개의 카드가 있고 각각의 카드에 적힌 숫자가 2, 3, 5, 7, 9일 때 철수가 4를 말하면 영희는 4번째로 큰 카드의 숫자 3을 말하면 된다.
// 주어진 n개의 카드 중에서 k번째로 큰 숫자를 출력하시오. 단 카드에 쓰여진 숫자는 모두 0보다 큰 자연수라고 생각한다.

/* 입력 */
// 5 5
// 1
// 2
// 3
// 4
// 5

/* 출력 */
// 1



//주의, 이 코드는 정상적으로 작동하지 않습니다!!
#include <stdio.h>
int main() {
	int input; //입력할 총 숫자 갯수
	int selectnum; //무슨 숫자를 넣을지 설정
	char data[1000][1000] = { 0, }; //입력한 숫자를 저장할 이차원배열

	scanf("%d %d", &input, &selectnum); //입력할 총 숫자 갯수와 몇번째로 큰 수를 출력할지 입력

	for (int i = 0; i < input; i++) { //input에 입력한 수만큼 반복한다
		int j = 0; //이차원배열 2번째 칸을 설정하기 위한 변수
		scanf("%s", &data[i][j]); //가장 처음 입력하면 data[0][0]에 저장, 이후 data[1][0], data[2][0], data[3][0]...순으로 저장이 되게끔 함
		printf("\n"); //공백을 띄어주기 위한 요소.. 였지만 필요없음
	}

	int temp; //두 값을 바꿀 때 사용하는 변수
	int length = sizeof(data) / sizeof(char); //배열의 크기를 구함

	// 정렬과정
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1; j++) {
			if (data[j] > data[j + 1]) {
				int before_j = 0;
				temp = data[j];
				data[j][before_j] = data[j + 1];
				data[j + 1][before_j] = temp;
			}
		}
	}

	printf("%d", data[selectnum][0]); //정렬된 데이터를 기반으로, selectnum의 숫자를 대입해 알맞은 숫자를 출력
	return 0;

}