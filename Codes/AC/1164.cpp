#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ll long long
#define ____ ios_base::sync_with_stdio(false);
#define fr(i,a,b) for (int i = a; i <= b ; i++)
#define all(a) (a).begin(),(a).end()
#define pii pair<int,int>
#define MOD 1000000007
#define N 100005
#define sc(x) scanf("%d",&x);
#define scl(x) scanf("%lld",&x);
#define inf 1000000000
using namespace std;

map <string, int> mpp;
string s;
int n,m,pol,en,cnt;

int main () {
	____
	
	
	cin >> n >> m;
	for (int i = 0 ; i < n ; i++) {
		cin >> s;
		mpp[s]++;
	}
	for (int i = 0 ; i < m ; i++) {
		cin >> s;
		mpp[s]++;
		if (mpp[s] == 2) cnt++;
	}

	pol = n - cnt;
	en = m - cnt;
	
	if (cnt%2==0) {
		if (pol > en) cout << "YES\n";
		else cout << "NO\n";
	}
	else {
		if (en > pol) cout << "NO\n";
		else cout << "YES\n";
	}
	
	return 0;
}
