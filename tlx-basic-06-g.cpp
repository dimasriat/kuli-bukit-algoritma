#include <iostream>
#include <limits>
using namespace std;

int main() {
	int t; 
	int up = numeric_limits<int>::min();
	int down = numeric_limits<int>::max();
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int tmp;
		scanf("%d", &tmp);
		up = max(up, tmp);
		down = min(down, tmp);
	}
	printf("%d %d\n", up, down);
	return 0;
}
