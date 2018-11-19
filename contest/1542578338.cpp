#include <bits/stdc++.h>
#ifdef TOPOLOGY
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define debug(...)
#endif
using namespace std;

int n, m;
struct every {
	bool ok;
	set<string> have;
};
struct huge {
	string front, back;	// 10
	vector<set<string> > info;
};
vector<huge> v;

vector<set<string> > getinfo(string s) {
	vector<set<string> > res;
	for (int k = 10; k; k--) {
		set<string> tmp;
		for (int i = 0; i < (int)s.size() - k + 1; i++) {
			tmp.insert(s.substr(i, k));
		}
		if ((int)tmp.size() == 1 << k) break;
		res.push_back(tmp);
	}
	return res;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		v.push_back({tmp.substr(0, 10), tmp.substr(max(0, (int)tmp.size() - 10)), getinfo(tmp)});
	}
	cin >> m;
	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		a--; b--;
		huge &ha = v[a], &hb = v[b], nh;
		nh.front = (ha.front + hb.front).substr(0, 10);
		nh.back = (ha.back + hb.back).substr(max(0, (int)(ha.back + hb.back).size() - 10));
		//nh.front = ha.front; nh.back = hb.back;

		int mz = (int)min(ha.info.size(), hb.info.size());
		vector<set<string> > ni;
		for (int i = 0; i < mz; i++) {
			set<string> tmp;
			for (auto &s : ha.info[i]) {
				tmp.insert(s);
			}
			for (auto &s : hb.info[i]) {
				tmp.insert(s);
			}
			if (tmp.size() == 1 << (10 - i)) break;
			ni.push_back(tmp);
		}
		string tmp = ha.back + hb.front;
		for (int i = 0; i < (int)ni.size(); i++) {
			int k = 10 - i;
			for (int j = 0; j < (int)tmp.size() - k + 1; j++) {
				ni[i].insert(tmp.substr(j, k));
			}
			if (ni[i].size() == 1 << k) break;
			nh.info.push_back(ni[i]);
		}
		v.push_back(nh);

		cout << 10 - nh.info.size() << endl;
	}
	return 0;
}