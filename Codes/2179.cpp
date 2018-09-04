#include <iostream>
#define MAXN 200005

using namespace std;

long long N, a[MAXN], pref[MAXN], suf[MAXN], cnt, ans;

int main ()
{
	cin >> N;
	for ( long long i = 1; i <= N; i++ )
	{
		cin >> a[i];
		pref[i] = pref[i - 1] + a[i];
	}

	for ( long long i = N; i >= 1; i-- )
		suf[i] = suf[i + 1] + a[i];
	
	cnt = N + 1;
	
	for ( long long i = 0; i <= N + 1; i++ )
	{
		while ( cnt > i && pref[i] > suf[cnt] )
			cnt--;

		if ( pref[i] == suf[cnt] && cnt > i )
			ans = pref[i];
	}
	
	cout << ans << "\n";
	return 0;
}
