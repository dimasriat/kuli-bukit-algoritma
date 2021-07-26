#include <iostream>
#include <cmath>
using namespace std;

int reverse(int x) {
	int y = 0; // hasil
	int d = 0; // jml digit
	while (x >= pow(10, d)) {
		d++;
	}
	for (int i = 1; i <= d; i++) {
		int tmp = y;
		y = y + (int(x / pow(10, d - i)) % 10) * pow(10, i - 1);
	}
	return y;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << reverse(reverse(a) + reverse(b)) << endl;
	return 0;
}
