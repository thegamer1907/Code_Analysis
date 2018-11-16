#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int arr[1000000];

int main() {
	int n, k = 0;
	cin >> n;
	k = n / 2;
	cout << k << endl;
	for (int i = 0;i < k - (n & 1);++i)
		cout << "2 ";
	if (n & 1) cout << 3;
	return 0;
}