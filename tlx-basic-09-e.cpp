#include <iostream>
using namespace std;

int main() {
	int n, m, p;
	int mtx_a[101][101];
	int mtx_b[101][101];
	cin >> n >> m >> p;
	for (int i = 0 ; i < n; i++) {
		for (int j = 0 ; j < m ; j++) {
			cin >> mtx_a[i][j];
		}
	}
	
	for (int i = 0 ; i < m; i++) {
		for (int j = 0 ; j < p ; j++) {
			cin >> mtx_b[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			int v = 0;
			for (int k = 0; k < m; k++) {
				v += mtx_a[i][k] * mtx_b[k][j]; 
			}
			cout << v << (j == p - 1 ? "\n" : " ");
		}
	}
	return 0;
}
