#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int a[200001], n;
queue<int> q;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 1; i < n; i++) {
		if (a[i] > a[i - 1] * 2)
			q.push(i);
	}

	int ans = 1;
	if (!q.empty()) {
		int pos = q.front();
		q.pop();
		ans = max(pos - 0, ans);

		while (!q.empty()) {
			ans = max(q.front() - pos, ans);
			pos = q.front();
			q.pop();
		}
		ans = max(n - pos, ans);
	}
	else
		ans = n;

	cout << ans << endl;
	return 0;
}