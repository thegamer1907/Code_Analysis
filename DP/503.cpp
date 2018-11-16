#include <stdio.h>
#include <assert.h>
#include <string.h>
#include<string>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<functional>
#include<map>
#include<set>
using namespace std;
const int maxn = 1e5 + 10;
typedef long long ll;
int n, m;
int a[maxn];
int b[maxn];
bool flag[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	cin >> m;
	for (int i = 1; i <= m; i++)
		cin >> b[i];
	sort(b + 1, b + 1 + m);
	int t = 0;
	int cnt = 0;
	memset(flag, 0, sizeof(flag));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (flag[j] == false && abs(a[i] - b[j]) <= 1) {
				flag[j] = true;
				++cnt;
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
