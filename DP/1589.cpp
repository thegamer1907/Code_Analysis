#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <utility>
#include <map>
#include <climits>
#include <set>
#include <iomanip>

#define DEBUG(x) cout << "> " << #x << ": " << x << "\n";

using namespace std;

template <typename T>
std::ostream &operator <<(std::ostream &out, vector<T> &v) {

	for (typename vector<T>::size_type i = 0; i < v.size(); ++i)
		out << v[i] << " ";
	out << "\n";

    return out;

}

int main() {

	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;

	int sz = s.size();

	int ab_pos, ba_pos;
	ab_pos = s.find("AB");
	ba_pos = s.find("BA");

	if (ab_pos == string::npos || ba_pos == string::npos) {
		cout << "NO\n";
		return 0;
	}

	for (int i = ab_pos + 2; i < sz - 1; ++i) {
		if (s[i] == 'B' && s[i + 1] == 'A') {
			cout << "YES\n";
			return 0;
		}
	} 

	for (int i = ba_pos + 2; i < sz - 1; ++i) {
		if (s[i] == 'A' && s[i + 1] == 'B') {
			cout << "YES\n";
			return 0;
		}
	}

	cout << "NO\n";

	return 0;

}