#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<assert.h>
#include<iostream>
#include<string>
using namespace std;

int main() {
	string op;
	cin >> op;
	int n, flag1 = -1, flag2 = -1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s[1] == op[0]) flag1 = i;
		if (s[0] == op[1]) flag2 = i;
		if (s == op) {
			cout << "YES\n";
			exit(0);
		}
	}
	if (flag1 != -1 && flag2 != -1) cout << "YES\n";
	else cout << "NO\n";
	//system("pause");
	return 0;
}