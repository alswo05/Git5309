#include <stdio.h>

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0) printf(i, " ");
	printf("\n");
	
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) printf(i, " ");
	printf("\n");
	
	return 0;
}
