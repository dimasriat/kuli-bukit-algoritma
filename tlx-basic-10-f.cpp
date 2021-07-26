#include <iostream>
#include <cmath>
#define INF 1000000007
using namespace std;

int t(int xi, int yi, int xj, int yj, int d) {
	return pow(abs(xj - xi), d) + pow(abs(yj - yi), d);
}

int main() {
	int n, d;
	int x[1001], y[1001];
	int up = -INF;
	int down = INF;
	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (i != j) {
				up = max(up, t(x[i], y[i], x[j], y[j], d));
				down = min(down, t(x[i], y[i], x[j], y[j], d));
			}
		}
	}
	cout << down << " " << up << endl;
}
