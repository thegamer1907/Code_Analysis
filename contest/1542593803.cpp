#include <bits/stdc++.h>

using namespace std;

#define debug(args...) fprintf(stderr,args)
#define pb push_back

const int N = 1e5 + 5;
const int inf = 1791791791;

int main() {
	string s;
	cin >> s;
	int n;
	scanf("%d", &n);
	string s2;
	int c1 = 0, c2 = 0;
	for (int i=0;i<n;i++) {
		cin >> s2;
		if (s2 == s) {
			printf("YES\n");
			return 0;
		}
		if (s[0] == s2[1]) c1 = 1;
		if (s[1] == s2[0]) c2 = 1;
	}
	if (c1 + c2 == 2) printf("YES\n");
	else printf("NO\n");
    return 0;
}

