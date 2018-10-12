#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int n, m;
string s1[1050];
string s2[1050];

int main() {
	while(~scanf("%d %d", &n, &m)) {
		for(int i = 1; i <= n; i++) cin >> s1[i];
		for(int i = 1; i <= m; i++) cin >> s2[i];
		int cnt = 0;
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				if(s1[i] == s2[j]) cnt++;
			}
		}
		if(cnt % 2 == 0) {
			if(n > m) puts("YES");
			else puts("NO");
		}
		else {
			if(n >= m) puts("YES");
			else puts("NO");
		}
	}
}