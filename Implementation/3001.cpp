#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define F first
#define S second
#define ret( a ) return cout << (a) << endl , 0 ;
#define all(i) i.begin(),i.end()
#define fix(i) fixed<<setprecision((i))
#define smax( i , j ) (i)=max((i),(j))
#define smin( i , j ) (i)=min((i),(j))
#define pii pair< int , int >
#define vec vector< int >

using namespace std;

const int maxn = 1e5+10;
const int INF = INT_MAX;
const int mod = 1e9+7;
int M, C;
int32_t main() {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;
	cin >> n;
	while (n--) {
		int m, c;
		cin >> m >> c;
		if (m > c)
			M++;
		if (c > m)
			C++;
	}
	if (M > C)
		puts("Mishka");
	if (C > M)
		puts("Chris");
	if (M == C)
		puts("Friendship is magic!^^");
	return 0;
}
