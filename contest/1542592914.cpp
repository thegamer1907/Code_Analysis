#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
#include<queue>
#include <map>
#include <set>
#include <memory.h>
#include <math.h>
using namespace std;


int f[26], l[26];
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

	string s, t;
	cin >> s;
	int n;
	cin >> n;
	bool flag = 0;
	for (int i = 0; i < n; i++) {
		cin >> t;
		f[t[0] - 'a']++;
		l[t[1] - 'a']++;
		if (t == s)
			flag = 1;
	}

	if ((flag) || (l[s[0]-'a'] && f[s[1]-'a']))
		cout << "YES";
	else
		cout << "NO";
	return 0;

}