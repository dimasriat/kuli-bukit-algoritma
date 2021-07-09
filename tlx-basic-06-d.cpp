#include <iostream>
using namespace std;

int main() {
	int x, total = 0;
	while(scanf("%d", &x) != EOF) {
		total += x;
	}
	printf("%d\n", total);
	return 0;
}
