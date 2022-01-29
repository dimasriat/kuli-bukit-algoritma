#include <iostream>
using namespace std;

int main() {
	unsigned long int x;
	scanf("%lu", &x);
	if (x == 1 || x == 2) {
		printf("ya\n");
	} else {
		while (true) {
			bool genap = (x % 2 ? false : true);
			if (genap) {
				if (x == 2) {
					printf("ya\n");
					break;
				}
				x /= 2;
			} else {
				printf("bukan\n");
				break;
			}
		}
	}
	return 0;
}
