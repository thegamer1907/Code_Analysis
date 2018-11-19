#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
typedef long long LL;

int n;
char s[10], t[10];

int main()
{
	scanf("%s", s);
	scanf("%d", &n);
	bool flag = false, flag_1 = false, flag_2 = false;
	for (int i = 1; i <= n; i++) {
		scanf("%s", t);
		if (t[0] == s[0] && t[1] == s[1]) flag = true;
		if (t[0] == s[1]) flag_2 = true;
		if (t[1] == s[0]) flag_1 = true;
	}
	if ((flag) || (flag_1 && flag_2)) printf("YES\n");
	else printf("NO\n");
	return 0;
}
