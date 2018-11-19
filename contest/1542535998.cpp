#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef long double ld;

const ll inf = LLONG_MAX;

#define rel( i, a, b) for( ll i = a ; i <= b ; i++ )
#define rep( k, a, b) for( ll k = a ; k <= b ; k+=2*k )
#define rev( i, a, b) for( ll i = b ; i >= a ; i-- )
#define M 1000000007
#define pll pair<ll,ll>
#define vll vector<ll>
#define vpll vector<pll>
#define mll map<ll,ll>
#define mpll map<ll,pll>
#define sll set<ll>
#define spll set<pll>
#define msll multiset<ll>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define FIO ios::sync_with_stdio(false);cin.tie(0);cerr.tie(0)
#define lb lower_bound
#define ub upper_bound
#define fprint(x) cout << fixed << setprecision(10) << (ld)x;

int main()
{
	string s1, s[1005];
	
	cin >> s1;
	int n,f = 0;
	cin >> n;
	
	rel(i,1,n){
		cin >> s[i];
		
		if( s[i] == s1 ){
			f = 1;
		}
	}
	
	rel(i,1,n){
		if( s[i][1] != s1[0] ) continue;
		//cout << s[i] << endl;
		rel(j,1,n){
			if( s[j][0] == s1[1] ) f = 1;
		}
	}
	
	if( f == 1 ) cout << "YES";
	else cout << "NO";
	
	
	
	return 0;
}

























