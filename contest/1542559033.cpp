#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <functional>

using namespace std;

int main() {
	string s;
	cin >> s;
	int n;
	cin >> n;
	bool match_found = false, start_found = false, end_found = false;
	while (n--) {
		string t;
		cin >> t;
		if (s == t) {
			match_found = true;
		}
		if (s[0] == t[1]) {
			start_found = true;
		}
		if (s[1] == t[0]) {
			end_found = true;
		}
	}
	if (match_found || (start_found && end_found)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}