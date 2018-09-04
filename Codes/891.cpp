#include<bits/stdc++.h>
#define maxn 100005 
using namespace std;
int n,k;
string s;
int suf[maxn];
bool check(int m,int p) {
	return suf[m]-suf[p+1] <= k;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	cin >> s;
	int ans = 1;
	string yee = "ab";
	for(char c : yee) {
		memset(suf,0,sizeof suf);
		suf[n] = 0;
		for(int i=n-1;i>=0;i--)
			suf[i] = suf[i+1] + (s[i]==c?1:0);
		for(int i=1;i<n;i++) {
			int l = 0 , r = i , m;
			while(true) {
				if(r-l<3) {
					for(m=r;m>=l&&check(m,i);m--);
					m++;
					break;
				}
				m = (l+r)>>1;
				if(check(m,i))
					r = m;
				else
					l = m+1;
			}
			ans = max(ans,i-m+1);
		}
	}
	cout << ans << endl;
	return 0;
}