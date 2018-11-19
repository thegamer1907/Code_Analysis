#include <bits/stdc++.h>

#define ll long long
#define MAXN 100005

using namespace std;

int m1[MAXN], m2[MAXN];

int main() {
	int n;
	char ch[10];
	char ch1[10];
	scanf("%s", ch);
	scanf("%d", &n);
	bool flag = false;
	for (int i = 0; i < n; i++) {
		scanf("%s", ch1);
		m1[ch1[0]] = m2[ch1[1]] = 1;
		if (strcmp(ch, ch1) == 0) {
			flag = true;
		}
	}
	if ((m1[ch[1]] && m2[ch[0]]) || flag) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}