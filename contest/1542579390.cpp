#include "bits/stdc++.h"
using namespace std;

const static int BITS = 20;
const static int LENGTH = 20 * 1000;

struct SS {
	vector<vector<bool>> mem; // index 0 represents length 1
	string s;
	SS(string ss) {
		s = ss;

		for (int length = 1; length <= BITS; length++) {
			vector<bool> temp(1 << length);
			mem.push_back(temp);
		}
	}

	void cc(const vector<vector<bool>> & foo) {
		for (int length = 1; length <= BITS; length++) {
			for (int i = 0; i < (1 << length); i++) {
				if (foo[length - 1][i]) {
					mem[length - 1][i] = true;
				}
			}
		}
	}

	int populate() {
		int res = 0;
		for (int length = 1; length <= BITS; length++) {
			for (int start = 0; start + length <= s.length(); start++) {
				if (start > 100 && start < s.length() - 100) continue;
				int val = 0;
				for (int i = start; i < start + length; i++) {
					val *= 2;
					val += (int) (s[i] - '0');
				}
				assert(val < mem[length - 1].size());
				mem[length - 1][val] = true;
			}
			bool ok = true;
			for (bool b : mem[length - 1]) if (!b) ok = false;
			if (ok) res = length;
		}
		return res;
	}
};

string getback(const string & s) {
	int len = min(LENGTH, (int) s.length());
	return s.substr(s.length() - len, len);
}

string getfront(const string & s) {
	int len = min(LENGTH, (int) s.length());
	return s.substr(0, len);
}

int main(){
	vector<SS> vec;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		SS ss(s);
		int res = ss.populate();
		vec.push_back(ss);
	}
	int m; cin >> m;
	for (int iter = 0; iter < m; iter++) {
		int a; cin >> a; a--;
		int b; cin >> b; b--;
		string back = getback(vec[a].s);
		string front = getfront(vec[b].s);
		string now = back + front;
		SS ss(now);
		ss.cc(vec[a].mem);
		ss.cc(vec[b].mem);
		int res = ss.populate();
		cout << res << endl;
		vec.push_back(ss);
	}
}
