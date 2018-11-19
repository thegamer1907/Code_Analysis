#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#define INF 1e9
#define LINF 1e18
using namespace std;

bool chk[27];
vector<string> inp;
string pw, str;
int N;
bool ans;

int main() {
	ios::sync_with_stdio(false);
	cin >> pw;
	cin >> N;
	ans = false;
	inp.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> inp[i];
		if (inp[i] == pw) {
			ans = true;
		}
	}
	if (N != 1) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (inp[i][1] == pw[0] && inp[j][0] == pw[1]) {
					ans = true;
					break;
				}
				
			}
			if (ans) break;
		}
	}
	else {
		if (inp[0][0] == pw[0] && inp[0][1] == pw[1]) ans = true;
		if (inp[0][1] == pw[0] && inp[0][0] == pw[1]) ans = true;
	}

	if (ans) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}