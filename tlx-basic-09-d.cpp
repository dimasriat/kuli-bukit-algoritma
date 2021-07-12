#include <iostream>
using namespace std;

int main() {
	int n, m;
	int matrix[101][101];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[(n - 1) - j][i];
			cout << (j == n - 1 ? "\n" : " ");
		}
	}
	
	return 0;
}
