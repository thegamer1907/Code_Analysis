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
	for (int i = 0;i < n;++i)
	{
		cin >> k;
		arr[k]++;
	}

	for (int i = 1;i < 200000;++i)
	{
		arr[i]+=arr[i-1];
	}

	cin >> k;
	for (int i = 0;i < k;++i) {
		cin >> n;
		n = min(n,150000);
		cout << arr[n] << endl;
	}
	return 0;
}