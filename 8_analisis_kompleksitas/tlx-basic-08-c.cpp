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

bool agak_prima(int x) {
	bool result = false;
	if (prima(x) || x == 1) {
		return true;
	}
	int i = 2;
	while (i * i <= x) {
		if (prima(i) && x % i == 0 && prima(x / i)) {
			result = true;
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
		printf(agak_prima(x) ? "YA\n" : "BUKAN\n");
	}
	return 0;
}
