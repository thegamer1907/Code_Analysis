/**********************************************
 *Author*        :TRDD
 *reated Time*  : 2017/8/11 16:45:20

*********************************************/

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <stack>
using namespace std;
typedef pair<int, int> PII;
typedef long long LL;
typedef unsigned long long ULL;
int n, m, cnt;
char a[1010][505], b[1010][105];
int main() {
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++) {
		scanf("%s", a[i]);
	}
	for(int i = 1; i <= m; i++) {
		scanf("%s", b[i]);
		int len1 = strlen(b[i]);
		for(int j = 1; j <= n; j++) {
			int len2 = strlen(a[j]);
			bool flag = 0;
			if(len1 != len2)continue;
			else {
				for(int k = 0; k < len1; k++) {
					if(b[i][k] != a[j][k]) {
						flag = 1;
						break;
					}
				}
				if(!flag)cnt++;
			}
		}
	}
	n -= cnt / 2;
	m -= cnt / 2;
	if(cnt & 1)n++;
	if(n > m)printf("YES\n");
	else printf("NO\n");
	return 0;
}