#include<bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;
typedef pair<int, int> pii;


int main()
{
	ios::sync_with_stdio( 0 );
	cin.tie( 0 );

	int n;
	int ans = -1;
	cin >> n;
	vector<int> s(n);
	vector<ll> time(n);

	for(int i = 0; i < n; i++ ){
		cin >> s[i];
		ll lo = 0, hi = 1e9;

		while(lo < hi){
			ll mid = (lo + hi) / 2;
			if(i + mid * n >= s[i]){
				hi = mid;
			}
			else lo = mid + 1;
		}
		time[i] = i + lo * n;
		if(ans == -1 || time[i] < time[ans]){
			ans = i;
		}
	}

	cout << ans + 1 << endl;


	return 0;
}
