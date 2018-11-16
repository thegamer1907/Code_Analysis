#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
using namespace std;

const int N = 1000001;

int a[1001], b[1001];

int main() {
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < k; ++i)
	{
		cin >> b[i];
		b[i] = -b[i];
	}
	 sort(b, b + k);
	k = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == 0)a[i] = -b[k++];
	}
	for (int i = 1; i < n; ++i)
	{
		if (a[i] <= a[i - 1]) {
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
	return 0;
}