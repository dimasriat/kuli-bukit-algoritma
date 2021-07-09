#include <iostream>
using namespace std;

int main() {
	int x;
	scanf("%d", &x);
	if (x < 10) {
		printf("satuan\n");
	}
	else if (x < 100) {
		printf("puluhan\n");
	}
	else if (x < 1000) {
		printf("ratusan\n");
	}
	else if (x < 10000) {
		printf("ribuan\n");
	} else {
		printf("puluhribuan\n");
	}
	return 0;
}
