#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int n;
	cin>>n;
	int t1 = 0,t2 = 0;
	while (n--) {
		string st;
		cin>>st;
		if (s[0] == st[0] && s[1] == st[1]) {
			t1 = 1;
			t2 = 1;
		}
		if (st[0] == s[1])
		t1 = 1;
		if (st[1] == s[0])
		t2 = 1;
	}
	if (t1 == 1 && t2 == 1)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	return 0;
}