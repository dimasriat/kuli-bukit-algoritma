#include <iostream>
#include <limits>
using namespace std;

int main() {
	int x;
	scanf("%d", &x);
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= x - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
