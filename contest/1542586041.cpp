#include<bits/stdc++.h>

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PB push_back

using namespace std;

int main(){
	fastio;
	string s; cin>> s;
	int n; cin >> n;

	bool posF = false;
	bool posS = false;
	while( n-- > 0){
		string ss;
		cin >> ss;
		if (ss.compare(s) == 0)
			posF = true, posS = true;
		if (ss[1] == s[0]) posF = true;
		if (ss[0] == s[1]) posS = true;
	}

	if (posS && posF) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}