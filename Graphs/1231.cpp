#include<bits/stdc++.h>
using namespace std;
const int MAXN = 3e4 + 10;

int n , t;
int a[MAXN];
bool visited[MAXN];

template <typename T> inline void chkmax(T &x,T y) { x = max(x,y); }
template <typename T> inline void chkmin(T &x,T y) { x = min(x,y); }
template <typename T> inline void read(T &x)
{
    T f = 1; x = 0;
    char c = getchar();
    for (; !isdigit(c); c = getchar()) if (c == '-') f = -f;
    for (; isdigit(c); c = getchar()) x = (x << 3) + (x << 1) + c - '0';
    x *= f;
}

int main()
{
		
		read(n); read(t);
		for (int i = 1; i < n; i++) read(a[i]);
		int now = 1;
		while (now <= n)
		{
				visited[now] = true;
				if (now == n) break;
				now += a[now];		
		}
		if (visited[t]) printf("YES\n");
		else printf("NO\n");
		
		return 0;
	
}
