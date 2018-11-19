#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair < int, int > ii;

const int N = 100 + 5;

int n;
char s[N][2];

int main() {

// #ifdef D
// 	freopen("in.txt", "r", stdin);
// 	freopen("out.txt", "w", stdout);
// #endif

	scanf("%s", s[0]);

	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		scanf("%s", s[i]);
		if(s[0][0] == s[i][0] and s[0][1] == s[i][1]) {
			puts("YES");
			return 0;
		}
		if(s[0][1] == s[i][0] and s[0][0] == s[i][1]) {
			puts("YES");
			return 0;
		}
		for(int j = 1; j < i; j++) {
			if(s[0][0] == s[j][1] and s[0][1] == s[i][0]) {
				puts("YES");
				return 0;
			}
			if(s[0][0] == s[i][1] and s[0][1] == s[j][0]) {
				puts("YES");
				return 0;
			}
		}
	}

	puts("NO");

    return 0;

}

