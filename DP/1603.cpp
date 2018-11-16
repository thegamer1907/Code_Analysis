#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include<cstring>

using namespace std;

int main() {
	string s;
	cin >> s;

	int n = s.size();

	bool ans1 = false;

	for (int i = 0; i+1 < n; i++) {
		if (s[i] == 'A' && s[i+1] == 'B') {
			for (int j = i + 2; j+1 < n; j++) {
				if (s[j] == 'B' && s[j+1] == 'A') {
					ans1 = true;
				}
			}
			break;
		}
	}

	bool ans2 = false;

	for (int i = 0; i+1 < n; i++) {
		if (s[i] == 'B' && s[i+1] == 'A') {
			for (int j = i + 2; j+1 < n; j++) {
				if (s[j] == 'A' && s[j+1] == 'B') {
					ans2 = true;
				}
			}

			break;
		}
	}

	if (ans1 || ans2) cout << "YES\n";
	else cout << "NO\n";


}