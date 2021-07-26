#include <iostream>
using namespace std;

int a[1001], b[1001];

void solve() {
	char p, q;
	int x, y;
	cin >> p >> x >> q >> y;
	if (p == 'A' && q == 'A')
		swap(a[x - 1], a[y - 1]);
	if (p == 'B' && q == 'B')
		swap(b[x - 1], b[y - 1]);
	if (p == 'A' && q == 'B')
		swap(a[x - 1], b[y - 1]);
	if (p == 'B' && q == 'A')
		swap(b[x - 1], a[y - 1]);
}

int main () {
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i]; 
	for (int i = 0; i < n; i++)
		cin >> b[i];
	int t; cin >> t;
	while(t--)
		solve();
	for (int i = 0; i < n; i++)
		cout << a[i] << (i == n - 1 ? "\n" : " ");
	for (int i = 0; i < n; i++)
		cout << b[i] << (i == n - 1 ? "\n" : " ");
	return 0;
}
