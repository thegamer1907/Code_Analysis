#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const int N = 1e6 + 10, MOD = 1e9 + 7;

char s[N];
int failureArray[N], mx;

int main() {
// 	freopen("input.txt", "r", stdin);
	scanf("%s", &s);
	int sz = strlen(s);
	int j = 0;
	for (int i = 1; i < sz;) {
		if (s[i] == s[j]) {
			j++;
			failureArray[i++] = j;
		} else if (j == 0) {
			failureArray[i++] = 0;
		} else {
			j = failureArray[j - 1];
		}
	}
	for (int i = 0; i < sz - 1; i++)
		mx = max(failureArray[i], mx);
	j = 0;
	for (int i = 1; i < sz;) {
		if (s[i] == s[j]) {
			j++;
			failureArray[i++] = j;
		} else if (j == 0) {
			failureArray[i++] = 0;
		} else {
			j = failureArray[j - 1];
		}
		if (j == mx)
			j = failureArray[j - 1];
	}
	if (failureArray[sz - 1] && mx)
		for (int i = 0; i < failureArray[sz - 1]; i++)
			printf("%c", s[i]);
	else
		cout << "Just a legend";
	return 0;
}
