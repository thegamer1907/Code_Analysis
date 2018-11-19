#include <bits/stdc++.h>
using namespace std;

int n;
set<char> b, e;

int main() {
	string t;
	cin >> t;
	cin >> n;
	bool ok = false;
	while(n--){
		string s;
		cin >> s;
		b.insert(s[s.size()-1]);
		e.insert(s[0]);
		for(int i=0; i<s.size()-1; i++){
			if(s[i] == t[0] && s[i+1] == t[1])
				ok = true;
		}
	}
	if(ok || (b.find(t[0]) != b.end() && e.find(t[1]) != e.end()) )
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
