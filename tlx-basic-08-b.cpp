#include <iostream>
using namespace std;

bool prima(int x) {
	bool result = true;
	if ((x % 2 == 0 && x > 2) || x < 2) {
		return false;
	}
	int i = 2;
	while (i * i <= x) {
		if (x % i == 0) {
			result = false;
			break;
		}
		i++;
	}
	return result;
}

int main() {
	int q; scanf("%d", &q);
	while(q--) {
		int x; scanf("%d", &x);
		printf(prima(x) ? "YA\n" : "BUKAN\n");
	}
	return 0;
}
