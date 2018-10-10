#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
  IO;
	int n, d; cin >> n >> d;
	vector <pair <int, int>> a(n);
	for (int i = 0; i < n; ++i) cin >> a[i].first >> a[i].second;

	sort(a.begin(), a.end());
	long long res = 0;
	deque <pair <int, int>> st;
	long long sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += a[i].second;
		st.push_back(a[i]);
		while (a[i].first - d >= st.front().first) {
			sum -= st.front().second;	
			st.pop_front();
		}
		res = max(res, sum);
	}
	cout << res << endl;
 
  return 0;
}
