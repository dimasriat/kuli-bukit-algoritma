#include <iostream>
#include <cmath>
using namespace std;

int f(int a, int b, int x) {
	return abs(a * x + b);
}

int main() {
	int a, b, k, x;
	cin >> a >> b >> k >> x;
	int hasil = x;
	while (k--) {
		hasil = f(a, b, hasil);
	}
	cout << hasil << endl;
	return 0;
}
