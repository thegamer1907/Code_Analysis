#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int gogogogogogogogogogogogogogogogogogo[200000];

int main() {
	int n, m;
	cin >> n >> m;
	queue<int> q;
	q.push(n);
	gogogogogogogogogogogogogogogogogogo[n] = 1;
	while (!q.empty())
	{
		n = q.front();q.pop();
		if (n < m && gogogogogogogogogogogogogogogogogogo[n * 2] == 0) {
			gogogogogogogogogogogogogogogogogogo[n * 2] = gogogogogogogogogogogogogogogogogogo[n] + 1;
			q.push(n << 1);
		}
		if (n > 1 && gogogogogogogogogogogogogogogogogogo[n - 1] == 0) {
			gogogogogogogogogogogogogogogogogogo[n - 1] = gogogogogogogogogogogogogogogogogogo[n] + 1;
			q.push(n - 1);
		}
	}
	cout << gogogogogogogogogogogogogogogogogogo[m]-1;

	return 0;
}