#include <iostream>
#include <iomanip>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <cmath>
#include <stack>
#include <limits>
using namespace std;

typedef short i16;
typedef long i32;
typedef long long i64;

int main() {
	ios::sync_with_stdio(false);

	string pw;
	vector<string> ws; //words
	int n;
	bool ans = false;

	cin >> pw;
	cin >> n;
	ws.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> ws[i];
		if (ws[i] == pw) ans = true;
	}
		
	for (int i = 0; i < n; i++) {
		if (ws[i][1] == pw[0]) {
			for (int j = 0; j < n; j++) {
				if (ws[j][0] == pw[1]) {
					ans = true;
				}
			}
		}
	}

	cout << (ans ? "YES" : "NO") << endl;

	return 0;
}
