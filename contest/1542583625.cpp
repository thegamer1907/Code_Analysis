/// 404 Err Can't Find Code </> 
// Infinity Loop :)

#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <math.h>
#include <queue>
#include <vector>
#include <fstream>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define fr first
#define sc second
#define FIX(x) cout.precision(x)
#define sz(x) ((int)(x).size())
#define smax(x,y) ((x)=max((x),(y)))
#define smin(x,y) ((x)=min((x),(y)))
#define all(x) (x).begin(),(x).end()
#define mem(x) memset(x,0,sizeof(x))
#define connect(z,x,y) z[x].pb(y),z[y].pb(x)
#define _ ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
//#define cin fin
typedef long long int ll;
typedef pair<int,int> pii;

const ll N = 1e6;
const ll mod = 1e9+7;
const ll inf = LLONG_MAX;

bool marka,markb ;

int32_t main()
{_
	string s; cin>>s;
	int n; cin>>n;
	while ( n-- ) {
		string a; cin>>a;
		if ( a == s ) return cout << "YES\n" , 0 ;
		if ( a[0] == s[1] ) marka = true ;
		if ( a[1] == s[0] ) markb = true ;
	}
	return cout << ( marka and markb ? "YES\n" : "NO\n" ) , EXIT_SUCCESS ;
}
