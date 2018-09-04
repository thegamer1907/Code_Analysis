#include <iostream>
#include <map>

#define ll long long

const int N = 200100;
using namespace std;

ll a[N];
int before[N];
int after[N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	
	map <ll, int> cnt1;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		
		if(a[i] % k == 0)
			before[i] = cnt1[a[i]/k];
		
		cnt1[a[i]]++;
	}		
	
	map <ll, int> cnt2;
	for(int i = n -1; i >= 0; i--)
	{
		if(a[i] % k == 0)
			after[i] = cnt2[a[i] *k];
		
		cnt2[a[i]]++;
	}

	ll ans = 0;
	for(int i = 0; i < n; i++)
		if(a[i] % k == 0)
			ans += 1ll *before[i] *after[i];
	
	cout << ans << '\n';
	return 0;
}