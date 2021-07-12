#include <iostream>
using namespace std;

int main() {
	int count[1001] = { 0 };
	int arr[100000 + 1];
	int max_num = 0, max_count = 0;
	int q; cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> arr[i];
		count[arr[i]]++;
		if (count[arr[i]] >= max_count) {
			if (count[arr[i]] > max_count) {
				max_num = arr[i];
				max_count = count[max_num];
			} else {
				max_num = max(max_num, arr[i]);
			}
		}
	}
	cout << max_num << endl;
	return 0;
}
