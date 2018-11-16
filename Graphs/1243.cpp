#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <map>

using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	int* a = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int k = 0;
	while (k < t) {
		k = k + a[k];
		if (k == t - 1) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}