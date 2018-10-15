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

const int maxn = 2e5+10;
const int INF = INT_MAX;
const int mod = 1e9+7;

int s[maxn];
char a[maxn], b[maxn], c[maxn];

int check (int x) {
	for(int i = 0; i < x; i++)
		a[s[i]-1] = '#';
	int j = 0;
	for(int i = 0; a[i] != '\0'; i++) {
			if (a[i] == b[j])
				j++;
			if(b[j] == '\0')
				return 1;
		}
	return 0;
}

int32_t main() {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> a >> b;
	strcpy(c, a);
	int lena, lenb;
	lena = strlen(a), lenb=strlen(b);
	for(int i = 0; i < lena; i++)
		cin >> s[i];
 
	int l = 0, r = lena - lenb, ans = 0;
	while(l <= r) {
		int mid = (l + r) >> 1;
		if(check(mid))
			l = mid + 1, ans = mid;
		else
			r = mid - 1;
		strcpy(a, c);
	}
	cout << ans << endl;
	return 0;
}
