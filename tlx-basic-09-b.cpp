#include <iostream>
using namespace std;

int main() {
	int i = 0;
	int arr[101];
	while(scanf("%d", &arr[i]) != EOF)
		i++;
	while(i) {
		i--;
		printf("%d\n", arr[i]);
	}
	return 0;
}
