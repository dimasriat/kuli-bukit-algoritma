#include <iostream>
#include <limits>
using namespace std;

int main() {
	int x, m = 0;
	scanf("%d", &x);
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", m++ % 10);
		}
		printf("\n");
	}
	return 0;
}
