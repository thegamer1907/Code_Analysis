#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,a,b) for(ll i=a;i <= b;i++)
#define rep(i,n) for(ll i=0;i < n;i++)
#define sz(x) x.size()
#define accuracy  ll precision = numeric_limits<double>::digits10
#define fast_io ios_base::sync_with_stdio(false)
#define N 43200

int cnt[N];

int main() {
	fast_io;
	accuracy;
	int h,m,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;
	cnt[s*720]++;
	cnt[m*720 + s*12]++;
	cnt[(h*3600 + m*60 + s) % N]++;
	bool pos1 = true,pos2 = true;
	t1 = (t1*3600) % N; t2 = (t2*3600) % N;
	int temp = t1;
	while(temp != t2) {
		temp++;
		if(temp == N) temp = 0;
		if(cnt[temp] != 0) {
			pos1 = false;
			break;
		}
	}
	temp = t1;
	while(temp != t2) {
		temp--;
		if(temp == -1) temp = N-1;
		if(cnt[temp] != 0) {
			pos2 = false;
			break;
		}
	}
	if(pos1 || pos2) cout << "YES\n";
	else cout << "NO\n";
}