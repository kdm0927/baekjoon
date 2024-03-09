#include <stdio.h>

int main() {
	int repr;
	int price[100];
	int prcout[10];
	int sum = 0;
	int count;

	scanf("%d", &repr);
	scanf("%d", &count);


	for (int i = 0; i < count; i++) {
		scanf("%d %d", &price[i],&prcout[i]);
		sum = sum + price[i]*prcout[i];
	}

	if (repr == sum) {
		printf("Yes");
	}
	else {
		printf("No");
	}

	return 0;
}