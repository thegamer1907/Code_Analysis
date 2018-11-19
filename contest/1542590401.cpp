#include <bits/stdc++.h>
using namespace std;
string s[220];

int main()
{
	string ans;
	cin >> ans;
	int n;
	cin >> n;
	int flag = 0;
	for (int i = 1; i <= n; i ++) {
		cin >> s[i];
		s[i + n] = s[i];
		if (s[i] == ans) {
			flag = 1;
			break;
		}
	}
	if (flag) {
		puts("YES");
		return 0;
	}
	string temp;
	for (int i = 1; i <= n * 2; i ++) {
		for (int j = 1; j <= n * 2; j ++) {
//			cout << s[i][1] << s[j][0] << endl;
			if (ans[0] == s[i][1] && ans[1] == s[j][0]) {
				flag = 1;
				break;
			}
//			if (temp == ans) {
//				flag = 1;
//				break;
//			}
		}
		if (flag) break;
	}
	if (flag) {
		puts("YES");
	} else {
		puts("NO");
	}
	return 0;	
} 