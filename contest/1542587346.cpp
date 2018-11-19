#include<bits/stdc++.h>

using namespace std;

int main() {
	string s; cin >> s;
	int n; cin >> n;
	vector<string> v;
	while(n--) {
		string x; cin >> x;
		if(s[0] == x[0] || s[0] == x[1] || s[1] == x[0] || s[1] == x[1])
			v.push_back(x);		
	}
	
	bool ok = false;
				
	for(int i = 0;i < v.size();i++) {
		for(int j = 0;j < v.size();j++) {
			string x = v[i] + v[j];
			string y = v[j] + v[i];
			
			if(x.find(s) != string::npos || y.find(s) != string::npos) {
				ok = true;
				break;
			}
		}
	}
	
	if(ok) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}