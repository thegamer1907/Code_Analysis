#include <stdio.h>
#include <iostream>
#include <vector>
#include <assert.h>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <memory.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
	string s;
	int n;
	string w;
	cin >> s >> n;
	bool a, b;
	a = b = false;
	for (int i = 0; i < n; ++i) {
		cin >> w;
		if (w == s) {
			puts("YES");
			return 0;
		}
		if (w[0] == s.back())
			a = true;
		if (w.back()==s[0])
			b = true;
	}
	if (a && b)
		puts("YES");
	else
		puts("NO");
	return 0;
}