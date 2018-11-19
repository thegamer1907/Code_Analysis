#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int n;
	cin >> n;
	bool a = false, b = false;
	for(int i=0;i<n;i++) {
		string s2;
		cin >> s2;
		if(s2==s)    a = b = true;
		if(s2[0]==s[1])    b = true;
		if(s2[1]==s[0])    a = true;
	}
	if(a&&b)    cout << "YES" << endl;
	else    cout << "NO" << endl;
	return 0;
}

