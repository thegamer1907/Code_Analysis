#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	int  en = n - 1, mid = (0 + en) >> 1, cnt = 0;

	for (int i = mid; i >= 0; i--) {
		if (v[i] * 2 <= v[en]) {
 			v[i] = -1;
			en--;
			cnt++;
		}
	}

	cout << n - cnt << endl;

	return 0;
}