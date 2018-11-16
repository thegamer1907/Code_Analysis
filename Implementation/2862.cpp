#include <bits/stdc++.h>
using namespace std;
const int maxn = 200010;
int a[maxn];
char c[maxn];
int n;
inline int read()
{
	int x = 0,f = 1;
	char ch = 0;
	for (;!isdigit(ch); ch =getchar()) if (ch == '-') f = -1;
	for (;isdigit(ch); ch = getchar()) x = x * 10 +ch - 48;
	return x * f;
}
int main()
{
	int A = read(), B = read();
	for (int i = 1; i <= 100; ++i)
	{
		A = A * 3, B *= 2;
		if (A > B) return printf("%d\n",i),0;
	}
}