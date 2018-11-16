#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<utility>
#include<vector>
#define LL long long
#define MAXN 110
#define MAXM 200010
#define debug(x) cerr << #x << " = " << x << endl
using namespace std;
//const int INF 1e9;
//const LL INF 1e18;
inline int read()
{
	int num = 0; char c; bool flag = false;
	while((c = getchar()) == ' '||c == '\n'||c =='\r');
	if(c == '-') flag = true; else num = c - '0';
	while(isdigit(c = getchar())) num = num * 10 + c - '0';
	return (flag? -1:1) * num;
}
int n,a[MAXN],s[MAXN],now,ans;
int main()
{
	n = read();
	for(int i = 1; i <= n; ++i)
	{
		a[i] = read();
		s[i] = s[i - 1] + a[i];
	}
	for(int i = 1; i <= n; ++i)
	{
		for(int j = i; j <= n; ++j)
		{
			int sum = j - i + 1;
			now = s[i - 1] + s[n] - s[j] + sum - (s[j] - s[i - 1]);
			ans = max(now, ans);
		}
	}
	printf("%d", ans);
	return 0;
}