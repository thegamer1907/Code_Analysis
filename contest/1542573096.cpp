#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define f first
#define s second
#define fr freopen("in.txt","r",stdin)
#define pb push_back
#define pi pair<int,int>
#define pii pair<pi,int>

bool P[211][16][1<<15];

string s[211];
ll len[211];
string pref[211];
string suf[211];
int lim = 15;
ll INF = 1e18;
void calc(int i) {
	if(s[i].size() <= lim) {
		pref[i] = s[i];
		suf[i] = s[i];
	}
	else{
		pref[i] = s[i].substr(0,lim);
		suf[i] = s[i].substr(s[i].size()-lim,lim);
	}
	len[i] = s[i].size();
	for(int p=0;p<s[i].size();p++) {
		int cur = 0;
		for(int q=p;q<s[i].size();q++) {
			if(q-p+1 > lim) break;
			cur *= 2;
			cur += (s[i][q]-'0');
			P[i][q-p+1][cur] = 1;
		}
	}
}

int getanswer(int i) {
	int ans = 0;
	for(int j=1;j<=lim;j++) {
		bool flag = 1;
		rep(mask,(1<<j)) {
			flag&=P[i][j][mask];
		}
		if(flag) ans = j;
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	rep(i,n) {
		cin >> s[i];
		calc(i);
	}
	int m,a,b;
	cin >> m;
	rep(j,m) {
		cin >> a >> b;
		a--;
		b--;
		int c= n+j;
		if(len[a] + len[b] <= 300) {
			s[n+j] = s[a] + s[b];
			calc(n+j);
		}
		else{
			len[c] = len[a] + len[b];
			len[c] = min(len[c],INF);
			pref[c] = pref[a];
			suf[c] = suf[b];
			for(int k=1;k<=lim;k++) {
				rep(j,(1<<k)) {
					P[c][k][j] = (P[a][k][j] | P[b][k][j]);
				}
			}
			string tmp = suf[a] + pref[b];
			for(int p=0;p<tmp.size();p++) {
				int cur = 0;
				for(int q=p;q<tmp.size();q++) {
					if(q-p+1 > lim) break;
					cur *= 2;
					cur += (tmp[q]-'0');
					P[c][q-p+1][cur] = 1;
				}
			}
		}
		cout << getanswer(c) << "\n";
	}
}