#include <iostream>
#include <vector>
using namespace std;

string s; int Z[1000000];
vector <int> sufpre;

int main() {
	cin >> s;
	int L = -1, R = -1, start, len = 0;
	sufpre.push_back(-1);
	for(int i = 1; i < s.length(); i++) {
		if(i > R) {
			L = R = i;
			while(R < s.length() && s[R-L] == s[R]) R++;
			Z[i] = R-L; R--;
		}
		else {
			int k = i - L;
			if(Z[k] < R - L - k) Z[i] = Z[k];
			else {
				L = i;
				while(R < s.length() && s[R-L] == s[R]) R++;
				Z[i] = R-L; R--;
			}
		}
	}
	for(int i = s.length() - 1; i > 0; i--) {
		if(Z[i] == s.length() - i) {
			sufpre.push_back(Z[i]);
			Z[i]--;
		}
	}
	int n = sufpre.size();
	for(int i = 1; i < s.length(); i++) {
		int r = 0;
		for(int j = 30; j >= 0; j--) {
			if((r + (1 << j) < n) && (sufpre[r+(1<<j)] <= Z[i])) r += (1 << j);
		}
		if(len < sufpre[r]) {
			start = i;
			len = sufpre[r];
		}
	}
	if(len > 0) {
		for(int i = 0; i < len; i++) cout << s[start + i];
	}
	else cout << "Just a legend";
	return 0;
}