/*In The Name of GOD*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e6+10;

ll a[N+10];

map <ll, int> cnt, bhnd, frnt;

int main()
{
	int n, k;   ll ans = 0;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
		
		if(!(a[i]%k))
			bhnd[i] = cnt[a[i]/k];
		
		cnt[a[i]]++;
	}
	
	cnt.clear();
	for(int i = n-1; i >= 0; i--)
		frnt[i] = cnt[(ll)a[i]*k],  cnt[a[i]]++;
	
	for(int i = 0; i < n; i++)
		ans += (ll)bhnd[i]*frnt[i];
	
	cout << ans;				
	
	return 0;
}