#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <list>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <stack>
#include <ctime>
#include <bitset>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <cstring>

using namespace std;

const long long MOD = 1e9 + 7;
const int MSIZE = 4e5;
vector<vector<pair<int, int> > > ev(MSIZE);

int a, n;
int id = 0;

bool check(int mid) {
	multiset<int> cur;
	int ans = 0;
	for (int i = 0; i < id; ++i) {
		int last = cur.size();
		cur.erase(i);
		ans += last - cur.size();
		for (pair<int, int> val : ev[i]) {
			if (cur.size() < mid)
				cur.insert(val.first);
			else if (*cur.rbegin() > val.first) {
				cur.erase(--cur.end());
				cur.insert(val.first);
			}
		}
	}
	return a <= ans;
}

void output(int mid) {
	set<pair<int, int> > cur;
	vector<int> output;
	for (int i = 0; i < id; ++i) {
		auto it = cur.lower_bound({ i, 0 });
		while (it != cur.end() && it->first == i) {
			output.push_back(it->second);
			cur.erase(it);
			it = cur.lower_bound({ i, 0 });
		}
		for (pair<int, int> val : ev[i]) {
			if (cur.size() < mid)
				cur.insert(val);
			else if (cur.rbegin()->first > val.first) {
				cur.erase(--cur.end());
				cur.insert(val);
			}
		}
	}
	cout << mid << endl;
	for (int val : output)
		cout << val + 1 << " ";
}

void bin() {
	int l = 0, r = n;

	while (r - l > 1) {
		int mid = (r + l) / 2;
		if (check(mid))
			r = mid;
		else
			l = mid;
	}
	output(r);
}

int main() {
	//ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // 
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string s;
	cin >> s;
	int n;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; ++i) {
		string t;
		cin >> t;
		v.push_back(t);
	}
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) {
			string t = v[i] + v[j];
			if (t.find(s) != string::npos) {
				cout << "YES";
				return 0;
			}
		}
	cout << "NO";
	return 0;
}