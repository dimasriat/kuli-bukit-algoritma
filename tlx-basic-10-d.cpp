#include <iostream>
using namespace std;

int a[100000], p[100000];

int main () {
	int x; cin >> x;
	
	int prime = 2;
	int result_index = 0;
	while (prime <= x && x > 1) {
		if (x % prime == 0) {
			a[result_index] = prime;
			p[result_index] = 1;
			x = x / prime;
			while (x % prime == 0) {
				x = x / prime;
				p[result_index]++;
			}
			result_index++;
		}
		prime++;		
	}
	
	for (int i = 0; i < result_index; i++) {
		cout << a[i];
		if (p[i] > 1)
			cout << "^" << p[i];
		if (i < result_index - 1)
			cout << " x ";
		else
			cout << endl;
	}
	
	return 0;
}

// 140 = 2^2 x 5 x 7 
