#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 100;
vector<pair<int, int> > p, x;

int main()
{
	string a;
	cin >> a;
	for (int i = 0; i < a.size(); i ++){
		if (i != a.size() - 1 && a[i] == 'A' && a[i + 1] == 'B')
			p.push_back({i, i + 1});
		if (i != a.size() - 1 && a[i] == 'B' && a[i + 1] == 'A')
			x.push_back({i, i + 1});
	}
	for (int i = 0; i < p.size(); i ++){
		for (int k = 0; k < x.size(); k ++){
			set <int> st;
			st.insert(p[i].first);
			st.insert(x[k].first);
			st.insert(p[i].second);
			st.insert(x[k].second);
			if (st.size() == 4)
				return cout << "YES", 0;
		}
	}
	cout << "NO";
	return 0; 
}
