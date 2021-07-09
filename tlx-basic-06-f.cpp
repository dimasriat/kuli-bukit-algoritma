#include <iostream>
using namespace std;

int main() {
	int x;
	scanf("%d", &x);
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			printf("%d\n", x / i);
		}
	}
	return 0;
}
