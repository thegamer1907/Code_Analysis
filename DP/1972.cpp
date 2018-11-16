#include<bits/stdc++.h>
#define ll long long
#define str string
#define pb  push_back
#define mp  make_pair
#define ff  first
#define ss  second

using namespace std ;
int main()
{
	ll n ,a , i  = 0 , k;
	cin >> n >> a;
	vector < ll > v;
	map < ll , ll > m;
	map < ll , ll > p;
	while( i < n)
	{
		cin >> k;
		v.pb(k);
		i++;
	}
	i = 0;
	k = 0;
	while( i < n )
	{
		if( m.find(v[n-i-1]) == m.end())
		{
			k++;
		}
		m[v[n-i-1]]++;
		p[n-i] = k;
		i++;
	}
	while(a--)
	{
		cin >> k;
		cout << p[k]<< endl;
	}
}
