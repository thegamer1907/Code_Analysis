#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
  IO;
	int n; cin >> n;
	vector <int> a(n);
	int s = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		s += a[i];
	}

	int curr = 0;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] == 1) --curr;
		else ++curr;
		curr = max(curr, 0);
		ans = max(ans, curr);
	}
	if (ans == 0) --ans;
	cout << s + ans << endl;

  return 0;
}
