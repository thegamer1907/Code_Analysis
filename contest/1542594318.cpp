#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define F first
#define S second
#define ld long double
#define int long long

using namespace std;

const int MAXN = 1001 * 1001 , MOD = 1e9 + 7 ; 


int c[400] , d[400] ; 

int32_t main() 
{
 	ios::sync_with_stdio(0) ; 
	cin.tie(0) ;  
	int n ; 
	string s ; 
	cin >> s ;
	cin >> n ; 
	for(int i = 0 ; i < n ; i ++ ) 
	{
		string t ; 
		cin >> t ; 
		if(s==t) return cout << "YES" << endl , 0 ; 
		c[t[0]] ++ ; 
		d[t[1]] ++ ; 
	}
	if(d[s[0]]&&c[s[1]]) return cout << "YES" << endl , 0 ; 
	cout << "NO" << endl ; 
	return 0;
}
