#include <stdio.h>
int main() {
	int input, candy = 0;
	scanf("%d", &input); 
	while (1) {
		if (input < 300) break;
		if (input >= 0) {
			input -= 300;
			candy++;
		}
	}
	printf("%d ", candy);
	if (input <= 0) printf("-1");
	else if (input >= 0) printf("%d", input);
}