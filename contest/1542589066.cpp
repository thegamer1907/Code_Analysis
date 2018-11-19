#include<bits/stdc++.h>

using namespace std;

int n;
string s, a;
bool bark = false;
set<char> f, l;

int main(){
	cin >> s;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a;
		if (a == s) bark = true;
		f.insert(a[0]);
		l.insert(a[1]);
	}
	if (f.count(s[1]) && l.count(s[0])) {
		bark = true;
	}
	if (bark) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
