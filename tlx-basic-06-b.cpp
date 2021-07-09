#include <iostream>
using namespace std;

int main() {
	int t, total = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int tmp;
		scanf("%d", &tmp);
		total += tmp;
	}
	printf("%d\n", total);
	return 0;
}
