#include <stdio.h>

int is_prime(int num) {
	if (num <= 1) return 0;
	for (int i = 2; i*i <= num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0) printf("%d ", i);
	}
	printf("\n");
	
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) printf("%d ", i);
	}
	printf("\n");
	
	for (int i = 1; i <= 100; i++) {
		if (is_prime(i)) printf("%d ", i);
	}

	return 0;
}

