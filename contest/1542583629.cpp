#include <algorithm>
#include <assert.h>
#include <iostream>
#include <string.h>
#include <memory.h>
#include <stdio.h>
#include <complex>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include <bitset>
#include <cstdio>
#include <queue>
#include <stack>
#include <cmath>
#include <set>
#include <map>
#include <deque>
typedef long long ll;
using namespace std;


int main() {
#ifdef SAMER
	freopen("myfile.in", "r", stdin);
#endif
	vector<string> v;
	string str;
	int n;
	cin >> str;
	scanf("%d", &n);
	v.resize(n);

	for (int i = 0; i < n; ++i)
		cin >> v[i];
	for (int i = 0; i<n; ++i)
		for (int j = 0; j < n; ++j) {
			if ((v[i][1] == str[0] && v[j][0] == str[1]) || str==v[i]) {
				puts("YES");
				exit(0);
			}
		}
	puts("NO");


	return 0;

}