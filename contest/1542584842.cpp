#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string s; cin >> s;
	int n; cin >> n;
	bool m1 = false , m2 = false;
	for(int i = 1;i <= n;i++){
		string t ; cin >> t;
		if(s == t) return cout << "YES" << endl , 0;
		if(t[0] == s[1]) m1 = true;
		if(t[1] == s[0]) m2 = true;
	}
	if(m1 and m2) return cout << "YES" << endl , 0;
	return cout << "NO" << endl , 0;
}