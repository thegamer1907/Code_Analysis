#include <bits/stdc++.h>
using namespace std;

int cnt[100010][2];

int main() {
	string str;
	const string ab = "AB", ba = "BA";
	cin >> str;

	for(int i = 0; i < (int)str.size()-1; ++i) {
		string ss = str.substr(i, 2);
		if(ss == ab)
			cnt[i][0] += 1;
		if(ss == ba)
			cnt[i][1] += 1;
	}

	for(int i = (int)str.size()-2; i >= 0; --i) {
		cnt[i][0] += cnt[i+1][0];
		cnt[i][1] += cnt[i+1][1];
	}

	for(int i = 0; i < (int)str.size()-1; ++i) {
		string ss = str.substr(i, 2);

		if(ss == ab and cnt[i+2][1] > 0) {
			cerr << "0 1 " << i << endl;
			cout << "YES" << endl;
			return 0;
		}
		if(ss == ba and cnt[i+2][0] > 0) {
			cerr << "1 0 " << i << endl;
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}