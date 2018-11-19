#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
#define X first
#define Y second
#define maxn 10002
#define eps 0.0000001
#define inf 1e9
#define pb push_back
using namespace std;
int bef[maxn],aft[maxn];
string s;
string t;
main(){
	cin >> s;
	int n;
	string ans = "NO";
	cin >> n;
	For(i,1,n) {
		cin >> t;
		bef[t[0]-'a'] = true;
		aft[t[1]-'a'] = true;
		if(t[0]==s[0] && t[1]==s[1]) ans = "YES";
	}
	if(bef[s[1]-'a'] && aft[s[0]-'a']) ans = "YES";
	cout << ans;
}