#include <bits/stdc++.h>

using namespace std;
map<long long,long long>mp_1,mp_2;
long long ans;
long long a[200005];

int main()
{
	int n,k;
	cin >> n >> k;
	for(int i = 0; i < n; ++ i)
	{
		cin >> a[i];
		mp_1[a[i]]++;
	}
	for(int i = 0; i < n; ++ i)
	{
		long long s1 = 0, s2 = 0;
		mp_1[a[i]]--;
		if(a[i]%k == 0)
			s1 = mp_2[a[i]/k];
		s2 = mp_1[a[i]*k];
		ans += (long long) s1*s2;
		mp_2[a[i]]++;
	}
	cout << ans;
}
