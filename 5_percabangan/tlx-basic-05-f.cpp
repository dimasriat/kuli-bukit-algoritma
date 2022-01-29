#include <iostream>
using namespace std;

int main () {
	float x;
	scanf("%f", &x);
	if (x == (int) x) {
		printf("%d %d\n", (int)x, (int)x);
	} else if (x > 0){
		int y = (int) x;
		printf("%d %d\n", y, y + 1);
	} else {
		int y = (int) x;
		printf("%d %d\n", (y - 1), y);
	}
	return 0;
}
