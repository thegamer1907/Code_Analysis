#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , m;
	cin >> n ;
	int a[n+1] , pa = 0;
	for( int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	sort( a , a+n);
	cin >> m ;
	int b[m+1], pb =0;
	for( int i = 0 ; i < m ; i++)
	{
		cin >> b[i];
	}
	sort( b , b+m);
	int ans = 0;
	//cout << a[0] << " " << b[0] << "\n";
	while( pa < n  && pb < m)
	{
		//cout << a[pa] << " " << b[pb] << "\n";
		if( abs(a[pa] - b[pb]) <= 1 )
		{
			ans++;
			pa++;
			pb++;
		}
		else if( a[pa] > b[pb] )
		{
			pb++;
		}
		else if( a[pa] < b[pb] )
		{
			pa++;
		}
	}
	cout << ans ;
	return 0;
}