#include <iostream>
using namespace std;

int main() {
	int x;
	scanf("%d", &x);
	if (x > 0) {
		printf("positif\n");
	}
	if (x < 0) {
		printf("negatif\n");
	}
	if (x == 0) {
		printf("nol\n");
	}
	return 0;
}
