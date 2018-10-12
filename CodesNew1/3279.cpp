#include <iostream>
using namespace std;
int n, a[100000];
bool enough(long long rounds) {
	long long supervisors = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > rounds) {
			return false;
		}
		supervisors += rounds - a[i];
	}
	if (supervisors >= rounds) {
		return true;
	} else {
		return false;
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long left = 1, right = 2000000000, middle;
	while (left < right) {
		middle = (left + right) / 2;
		if (enough(middle)) {
			right = middle;
		} else {
			left = middle + 1;
		}
	}
	cout << left << "\n";
}
