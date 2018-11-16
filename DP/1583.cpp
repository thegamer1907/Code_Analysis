/* DHUOJ solution #368859 @ 2018-11-13 19:04:43.405 */

#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
string s, str;

int main() {
	while (cin >> s) {
		int len = s.length();
		int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
		for (int i = 0; i < len;) {
			int k = i;
			if (i <= len - 3) {
				str = s.substr(i, 3);
				if (str == "ABA" || str == "BAB")   flag3 = 1, i += 3;
				
			}
			if (i <= len - 2 && s[i] == 'A'&&s[i + 1] == 'B')   flag1 = 1, i += 2;
			if (i <= len - 2 && s[i] == 'B'&&s[i + 1] == 'A')   flag2 = 1, i += 2;

			if (k == i) i++;
			if (flag1&&flag2 || (flag3 && (flag1 || flag2))) { flag4 = 1; break; }
		}
		if (flag4) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}