#include <iostream>
#include <string>
#include <sstream>
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <bitset>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, i, j, k, t;
	cin >> n;
	vector<int> ans;

	while (n > 0) {
		string s = to_string(n), ss = s;
		for (i = 0; i < s.length(); i++) {
			if (s[i] > '0') ss[i] = '1';
			else ss[i] = '0';
		}
		ans.push_back(stoi(ss));
		n -= stoi(ss);
	}

	cout << ans.size() << "\n";
	for (auto p : ans) cout << p << " ";
	cout << "\n";

	return 0;
}
