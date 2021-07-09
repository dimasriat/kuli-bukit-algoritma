#include <iostream>
#include <limits>
using namespace std;

int main() {
	int x;
	scanf("%d", &x);
	for (int i = 1; i <= x; i++) {
		if (i == 42) {
			printf("ERROR\n");
			break;
		}
		if (i % 10 != 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}
