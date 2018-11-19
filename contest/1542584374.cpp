#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define F first
#define S second
#define ld long double
#define int long long

using namespace std;

const int MAXN = 1001 * 1001 , MOD = 1e9 + 7 ; 



int32_t main() 
{
 	ios::sync_with_stdio(0) ; 
	cin.tie(0) ;  
	int n , k  ; 
	cin >> n >> k ; 
	vector<int> v;  
	for(int i = 0 ; i < n ; i ++ ) 
	{
		int val = 0 , x ; 
		for(int i = 0 ; i < k ; i ++ ) 
			cin >> x , val += x * (1<<i) ; 
		v.pb(val) ; 
	}
	sort(v.begin(),v.end()) ; 
	v.resize(unique(v.begin(),v.end())-v.begin()) ; 
	int m = v.size() ; 
	for(int i = 1 ; i < (1<<m) ; i ++ ) 
	{
		int cnt[10] = {} ; 
		int num = 0 ; 
		for(int j = 0 ; j < m ; j ++ ) 
		{
			if(!(i&(1<<j))) continue; 
			num ++ ; 
			for(int w = 0 ; w < k ; w ++ ) 
				cnt[w] += ((v[j] & (1<<w)) > 0 ) ; 
		}
		num /= 2 ; 
		bool f = 0 ; 
		for(int i = 0 ; i < k ; i ++ ) if(cnt[i]>num) f = 1 ; 
		if(!f) return cout << "YES" << endl , 0 ; 
	}
	cout << "NO" << endl ;
	return 0;
}
