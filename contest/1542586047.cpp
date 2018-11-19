#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<string.h>
#include<sstream>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<memory.h>
#include<math.h>
using namespace std;
#define M 1000000007

int main() {
	int n, m, q;
	string s, e;

	cin >> s;
	cin >> n;
	int x = -1, y = -1;
	vector<int>v(n);
	
	for (int i = 0; i < n; i++) {
		cin >> e;
		if (s == e) {
		puts("YES");
		return 0;
		}
		if (e[1] == s[0])
			x = 1;
		if (e[0] == s[1])
			y = 1;
	}

	if (x != -1 && y != -1)puts("YES");
	else puts("NO");

	return 0;
}