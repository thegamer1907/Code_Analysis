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
#include <stack>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef double DB;

int n;
int head[105], tail[105];
bool vis[105][105];

int main()
{
	memset(vis, 0, sizeof(vis));
	char a, b;
	scanf(" %c %c", &a, &b);
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		char x, y;
		scanf(" %c %c", &x, &y);
		vis[x - 'a'][y - 'a'] = 1;
		head[i] = x - 'a'; 
		tail[i] = y - 'a';
	}
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			vis[tail[i]][head[j]] = 1;
	if(vis[a - 'a'][b - 'a']) printf("YES\n");
	else printf("NO\n");
}